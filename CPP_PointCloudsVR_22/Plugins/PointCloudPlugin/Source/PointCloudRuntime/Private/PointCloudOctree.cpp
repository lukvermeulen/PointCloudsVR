// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudOctree.h"
#include "PointCloud.h"
#include "PointCloudHelper.h"
#include "Async/Async.h"
#include "Async/Future.h"
#include "SceneView.h"

//Luk Impported
#include "Box.h"
#include "Vector.h"
#include "Math/UnrealMathUtility.h"

#include "EngineGlobals.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "DrawDebugHelpers.h"
#include <Runtime/Engine/Classes/GameFramework/Actor.h>

////////////////////////////////////////////////////////////
// FPointCloudOctreeNode

//LUK CODE
TArray<uint32> TmpTouchedPointsIndex;   //stores indecies to Points
TArray<TArray<uint32>> SelectionList;   //List of individual selections
TArray<int32> ToBeDeleted;				//SelectionIndex of selection that will be deleted

//TODO maybe move cloud rebuild from blueprint to the function itself?
//TODO !!Export only points that do not match index in deleted index?
//TODO Maybe copy point array to call deletion upon, so you can continue working after export (Hard delete changes all indecies etc) or only skip those on export

TArray<uint32> FPointCloudOctree::GetSelectionList(int32 ListIndex) { return SelectionList[ListIndex]; }

void FPointCloudOctree::ResetVariables()
{
	TmpTouchedPointsIndex.Empty();
	ToBeDeleted.Empty();
	for (auto &index : SelectionList)
	{
		index.Empty();
	}
	SelectionList.Empty();
}

void FPointCloudOctree::AddSelectionIndex()
{
	SelectionList.AddDefaulted(1);
}

void FPointCloudOctree::MarkForDeletion(int32 index)
{
	ToBeDeleted.AddUnique(index);
}

void FPointCloudOctree::DeleteAllMarked(TArray<FPointCloudPoint> &Points)
{
	DeleteCollectedPoints(Points);
	/*for (auto const &index : ToBeDeleted)
	{
		DeleteCollectedPoints(index, Points);
	}*/
}

void FPointCloudOctree::DeleteCollectedPoints(TArray<FPointCloudPoint> &Points) //int32 SelectionListIndex,
{
	TArray<uint32> tmpdeleteindices;
	
	for (auto const& i : ToBeDeleted)
	{
		tmpdeleteindices.Append(SelectionList[i]);
	}
	
	tmpdeleteindices.Sort();

	for (int32 i = tmpdeleteindices.Num(); i >= 0; i--)
	{
		Points.RemoveAt(i); // Only call at end! Indexes need to probably be refreshed somehow to work runtime
	}
}

void FPointCloudOctree::ColorCollectedPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points, FColor pColor) 
{
	//Check if selection already exists, if not add a slot for it
	if (SelectionList.Num() < (SelectionListIndex + 1))
	{
		SelectionList.AddDefaulted(1);
	}
	for (auto const &index : SelectionList[SelectionListIndex])
	{
		Points[index].Color=pColor;
	}
}

void FPointCloudOctree::HideCollectedPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points)
{
	//Check if selection already exists, if not add a slot for it
	if (SelectionList.Num() < (SelectionListIndex + 1))
	{
		SelectionList.AddDefaulted(1);
	}
	for (auto const &index : SelectionList[SelectionListIndex])
	{
		Points[index].SetEnabled(false);
		Points[index].SetEnabledOverride(true);
	}
}

//Calls function FitBox on already slected points
void FPointCloudOctree::CallFitBoxOnSelection(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points, const FPointCloudOctree::Node& pNode)
{
	//Check if selection already exists, if not add a slot for it
	if (SelectionList.Num() < (SelectionListIndex + 1))
	{
		SelectionList.AddDefaulted(1);
	}
	
	FBox SelectionBounds = FitBox(SelectionList[SelectionListIndex], Points);
	
	// Does Selection Bounds intersects with node 
	if (SelectionBounds.Intersect(pNode.WorldBounds.GetBox()))
	{
		if (pNode.LOD >= 0)
		{
			for (auto const & index : pNode.LukPointIndices)
			{
				if (SelectionBounds.IsInsideOrOn(Points[index].Location))
				{
					SelectionList[SelectionListIndex].AddUnique(index);
				}
			}
		}

		if (pNode.LOD > 0)
		{
			
			// Iterate through all node children
			for (int i = 0; i < int(pNode.NumChildren); i++) {
				CallFitBoxOnSelection(SelectionListIndex, Points, *pNode.Children[i]);
			}
		}
	}
	else // Collider not inside node
	{
		//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Collider NOT Inside Node")); }
	} 
}

void FPointCloudOctree::GetPointsInDrawnBox(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points, const FPointCloudOctree::Node& pNode, TArray<FVector> BoxPoints)
{
	//Check if selection already exists, if not add a slot for it
	if (SelectionList.Num() < (SelectionListIndex + 1))
	{
		SelectionList.AddDefaulted(1);
	}

	FBox SelectionBounds = FBox(BoxPoints);

	// Does Selection Bounds intersects with node 
	if (SelectionBounds.Intersect(pNode.WorldBounds.GetBox()))
	{
		if (pNode.LOD >= 0)
		{
			for (auto const & index : pNode.LukPointIndices)
			{
				if (SelectionBounds.IsInsideOrOn(Points[index].Location))
				{
					SelectionList[SelectionListIndex].AddUnique(index);
				}
			}
		}

		if (pNode.LOD > 0)
		{

			// Iterate through all node children
			for (int i = 0; i < int(pNode.NumChildren); i++) {
				GetPointsInDrawnBox(SelectionListIndex, Points, *pNode.Children[i], BoxPoints);
			}
		}
	}
	else // Collider not inside node
	{
		//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Collider NOT Inside Node")); }
	}
}

//Create Box from points
FBox FPointCloudOctree::FitBox(TArray<uint32> Selection, TArray<FPointCloudPoint> &Points)
{
	TArray<FVector> PointsForBox;
	for (auto const & i : Selection)
	{
		PointsForBox.Add(Points[i].Location);
	}

	UWorld* myworld = GEngine->GetWorldFromContextObject(PointCloud);
	DrawDebugBox(myworld, FBox(PointsForBox).GetCenter(), FBox(PointsForBox).GetExtent(), FColor::Green, false, 10, 0, 5);

	return FBox(PointsForBox);
}

//Calculate if Point is in certain distance to plane and lies between bounds
bool FPointCloudOctree::PointOnPlaneInBounds(FPlane Plane, FVector Point, FVector PlanePoint1, FVector PlanePoint2, FVector PlanePointB, FVector PlaneNormal, float Threshhold)
{
	FVector ProjectedPoint = FVector::PointPlaneProject(Point, Plane);
	float DistanceToPlane = FMath::Abs(FVector::PointPlaneDist(Point, PlanePoint1, PlaneNormal.GetSafeNormal(0.0001)));

	//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Distance to Plane: %f"), DistanceToPlane)); }

	if (DistanceToPlane > Threshhold) { return false; }
	else
	{
		FVector ClosestPointU; //= FMath::ClosestPointOnInfiniteLine(PlanePoint1, PlanePoint2, Point);  //(PlanePoint1 - PlanePoint2)
		FVector ClosestPointV; //= FMath::ClosestPointOnInfiniteLine(PlanePoint2, PlanePoint2, Point);  //(PlanePoint2 - PlanePoint3)

		FMath::PointDistToLine(Point, (PlanePoint1 - PlanePoint2), PlanePoint1, ClosestPointU);
		FMath::PointDistToLine(Point, (PlanePoint2 - PlanePointB), PlanePoint2, ClosestPointV);

		float DistanceCombinedU = (FVector::DistSquared(ClosestPointU, PlanePoint1)) + (FVector::DistSquared(ClosestPointU, PlanePoint2));
		float DistancePointsU = FVector::DistSquared(PlanePoint1, PlanePoint2);

		float DistanceCombinedV = FVector::DistSquared(ClosestPointV, PlanePoint2) + FVector::DistSquared(ClosestPointV, PlanePointB);
		float DistancePointsV = FVector::DistSquared(PlanePoint2, PlanePointB);

		if ((DistanceCombinedU < DistancePointsU) && (DistanceCombinedV < DistancePointsV))
		{
			return true;
		}
		else {
			return false;
		}
	}
	
}

void FPointCloudOctree::GetPointsOnPlaneInBounds(FPlane Plane, FVector PlanePoint1, FVector PlanePoint2, FVector PlanePoint3, FVector PlanePointA, FVector PlanePointB, FVector PlaneNormal, float Threshhold, int32 SelectionListIndex, TArray<FPointCloudPoint>& Points, const FPointCloudOctree::Node& pNode)
{
	//Check if selection already exists, if not add a slot for it
	if (SelectionList.Num() < (SelectionListIndex + 1))
	{
		SelectionList.AddDefaulted(1);
	}
	
	TArray<FVector> PlanePoints;
	FVector NormalizedPlaneNormal = PlaneNormal.GetSafeNormal();
	PlanePoints.Add(PlanePoint1);
	PlanePoints.Add(PlanePoint2);
	PlanePoints.Add(PlanePoint3);
	PlanePoints.Add(PlanePoint1 + (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePoint2 + (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePointA + (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePointB + (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePoint1 - (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePoint2 - (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePointA - (NormalizedPlaneNormal*Threshhold));
	PlanePoints.Add(PlanePointB - (NormalizedPlaneNormal*Threshhold));

	UWorld* myworld = GEngine->GetWorldFromContextObject(PointCloud);
	
	FBox CompleteBounds = FBox(PlanePoints);  //Construct Axis Aligned Box for all Points  //Root.WorldBounds.GetBox();

	for (auto const& index : PlanePoints)
	{
		DrawDebugBox(myworld, CompleteBounds.GetCenter(), CompleteBounds.GetExtent(), FColor::Red, false, 10, 0, 5);
		DrawDebugPoint(myworld, index, 50, FColor::Red, false, 10);
	}

	//Get All Nodes that intersect with CompleteBounds
	if (CompleteBounds.Intersect(pNode.WorldBounds.GetBox())) //
	{
		if (pNode.LOD >= 0)
		{
			for (auto const & index : pNode.LukPointIndices)
			{
				if (CompleteBounds.IsInsideOrOn(Points[index].Location))//
				{
					if (PointOnPlaneInBounds(Plane, Points[index].Location, PlanePoint1, PlanePoint2, PlanePointB, PlaneNormal, Threshhold))
					{
						SelectionList[SelectionListIndex].AddUnique(index);
					}
				}
			}
		}

		if (pNode.LOD > 0)
		{
			// Iterate through all node children
			for (int i = 0; i < int(pNode.NumChildren); i++) {
				GetPointsOnPlaneInBounds(Plane, PlanePoint1, PlanePoint2, PlanePoint3, PlanePointA, PlanePointB, PlaneNormal, Threshhold, SelectionListIndex, Points, *pNode.Children[i]);
			}
		}
	}
	else // Collider not inside node
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, TEXT("Collider NOT Inside Node")); }
	}
}

//Adds all points indecics of points that collide with collider to Array in given selection
void FPointCloudOctree::GetPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &PointCloudPoints, FVector ColliderLocation, int32 Radius, const FPointCloudOctree::Node &ppNodeToGetPoints)
{
	//For every PointIndex in LukPointIndex
	for (auto const &pointIndex : ppNodeToGetPoints.LukPointIndices)
	{
		double distanceSquared = (PointCloudPoints[pointIndex].Location - (ColliderLocation)).SizeSquared();
		uint32 radiusSquared = Radius * Radius;
		//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("DistanceSquared to Collider: %f"), distanceSquared)); } //Print distanceSquared
		if (distanceSquared < radiusSquared)
		{
			SelectionList[SelectionListIndex].AddUnique(pointIndex);           // Add the Index of the Point to the collection

			UWorld* myworld = GEngine->GetWorldFromContextObject(PointCloud);
			//DrawDebugPoint(myworld, PointCloudPoints[pointIndex].Location, 50, FColor::Red, false, 10);

			//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Point Added: %d"), pNodeToGetPoints.LOD)); }
		}
	}
}

// Function called by PointCloud.h Calls other function and starts recursion with root node
void FPointCloudOctree::GetTouchedPoints(int32 SelectionListIndex, FVector ColliderLocation, int32 Radius, TArray<FPointCloudPoint> &PointCloudPoints, const FPointCloudOctree::Node& ParamRoot)
{
	if (SelectionList.Num()<(SelectionListIndex+1))
	{
		SelectionList.AddDefaulted(1);
	}
	GetAllTouchedNodes(SelectionListIndex, ColliderLocation, Radius, PointCloudPoints, ParamRoot); // Call function that goes through nodes

	if (GEngine) { GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::Red, FString::Printf(TEXT("Number of collected points: %d"), TmpTouchedPointsIndex.Num())); }
	return;
}

FColor DarkRed = FColor(155, 29, 67, 1);
// Go through all nodes
void FPointCloudOctree::GetAllTouchedNodes(int32 SelectionListIndex, FVector CLocation, int32 Radius, TArray<FPointCloudPoint> &pPointCloudPoints, const FPointCloudOctree::Node &pNodeToGetPoints)
{
	FBox nodeBox = pNodeToGetPoints.WorldBounds.GetBox(); // Box from Node to check against collider

	// Is the Collider Sphere inside the node or the distance to it smaller than the sphere radius and does the node have 0 children?
	if (nodeBox.IsInsideOrOn(CLocation) || nodeBox.ComputeSquaredDistanceToPoint(CLocation) < (Radius*Radius))
	{
		//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Collider IS Inside LOD")); }
		UWorld* myworld = GEngine->GetWorldFromContextObject(PointCloud);
		FVector center = nodeBox.GetCenter();
		FVector extent = nodeBox.GetExtent();
		

		if (pNodeToGetPoints.LOD >= 0)
		{
			//if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Colliding with LOD: %d"), pNodeToGetPoints.LOD)); }
			GetPoints(SelectionListIndex, pPointCloudPoints, CLocation, Radius, pNodeToGetPoints); // Get the points that are inside the collider

			DrawDebugBox(myworld, center, extent, DarkRed, false, 10, 0, 10);
		}

		if (pNodeToGetPoints.LOD > 0)
		{
			// Iterate through all node children
			for (int i = 0; i < int(pNodeToGetPoints.NumChildren); i++) {
				GetAllTouchedNodes(SelectionListIndex, CLocation, Radius, pPointCloudPoints, *pNodeToGetPoints.Children[i]); // Start recursion to check child nodes
			}
		}

	}
	else // Collider not inside node
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, TEXT("Collider NOT Inside Node")); }
	}
}
//END LUK


FPointCloudOctree::Node::Node(FVector Origin, FVector BoxExtent, const TArray<FPointCloudPoint*> *InPoints, Node* Parent, FPointCloudOctree* Tree)
	: NumPrimitives(0)
	, LOD(UINT_MAX)
	, Tree(Tree)
	, Parent(Parent)
	, NumChildren(0)
	, ChildIndex(0)
{
	Build(Origin, BoxExtent, InPoints);
}

FPointCloudOctree::Node::~Node()
{
	for (uint8 i = 0; i < NumChildren; i++)
	{
		if (Children[i])
		{
			delete Children[i];
		}
	}
}

void FPointCloudOctree::Node::ApplyLocalToWorld(const FTransform &LocalToWorld)
{
	WorldBounds = LocalBounds.TransformBy(LocalToWorld);

	for (int32 i = 0; i < NumChildren; i++)
	{
		Children[i]->ApplyLocalToWorld(LocalToWorld);
	}
}

void FPointCloudOctree::Node::Build(FVector Origin, FVector BoxExtent, const TArray<FPointCloudPoint*> *InPoints)
{
	// Build temporary point array to store only relevant points
	TArray<FPointCloudPoint*> TmpPoints;
	
	// Temporarily stores point reservations
	TArray<uint32> Reservations;

	FVector Min = Origin - BoxExtent;
	FVector Max = Origin + BoxExtent;

	for (int32 i = 0; i < (*InPoints).Num(); i++)
	{
		FPointCloudPoint* Point = (*InPoints)[i];

		if (Point)
		{
			if (Parent == nullptr)
			{
				TmpPoints.Add(Point);
				Reservations.Add(Point->VertexIndex);
			}
			else
			{
				// Point is within the bounds
				if ((Point->Location.X >= Min.X) && (Point->Location.X <= Max.X) && (Point->Location.Y >= Min.Y) && (Point->Location.Y <= Max.Y) && (Point->Location.Z >= Min.Z) && (Point->Location.Z <= Max.Z))
				{
					// For edge cases check if the points have already been added
					if (((Point->Location.X != Min.X) && (Point->Location.X != Max.X) && (Point->Location.Y != Min.Y) && (Point->Location.Y != Max.Y) && (Point->Location.Z != Min.Z) && (Point->Location.Z != Max.Z)) || !Tree->IsPointUsed(Point->VertexIndex, GetDepth()))
					{
						TmpPoints.Add(Point);
						Reservations.Add(Point->VertexIndex);
					}
				}
			}
		}
	}

	// Check if the node contains minimum amount of points
	if (TmpPoints.Num() >= Tree->MinimumNodePointCount)
	{
		LOD = Tree->MaxLOD - GetDepth();

		Tree->CriticalSection.Lock();

		// Apply reservations, unless root node
		if (Parent != nullptr)
		{
			for (uint32 Reservation : Reservations)
			{
				Tree->SetPointUsed(Reservation, GetDepth());
			}
		}

		WorldBounds = LocalBounds = FBoxSphereBounds(Origin, BoxExtent, BoxExtent.Size());
		Tree->CriticalSection.Unlock();
		
		BuildIBCache(&TmpPoints);

		Tree->CriticalSection.Lock();
		Tree->AddStats(GetDepth(), NumPrimitives);
		Tree->CriticalSection.Unlock();

		Subdivide(&TmpPoints);
	}
}

void FPointCloudOctree::Node::Subdivide(TArray<FPointCloudPoint*> *InPoints)
{
	if (GetDepth() < Tree->MaxLOD)
	{
		const FVector ChildBoxExtent = LocalBounds.BoxExtent * 0.5f;

		// Use multi-threading processing only if root
		bool bUseMultithreading = !Parent;

		TFuture<bool> *Results = new TFuture<bool>[8];

		for (int32 i = 0; i < 8; i++)
		{
			const FVector Offset = FVector((i & 1) == 1, (i & 2) == 2, (i & 4) == 4);

			if (bUseMultithreading)
			{
				// Fire threads
				Results[i] = Async<bool>(EAsyncExecution::ThreadPool, [=]
				{
					Subdivide_Thread(InPoints, ChildBoxExtent, Offset);
					return true;
				});
			}
			else
			{
				Subdivide_Thread(InPoints, ChildBoxExtent, Offset);
			}
		}

		// Sync
		if (bUseMultithreading)
		{
			for (int32 i = 0; i < 8; i++)
			{
				if (Results[i].Get()) {}
			}
		}
		
		delete[] Results;
	}
}

void FPointCloudOctree::Node::Subdivide_Thread(TArray<FPointCloudPoint*> *InPoints, const FVector &Extent, const FVector &Offset)
{
	// Offsets each child by the current x y z coordinates
	Node *Child = new Node(LocalBounds.Origin + LocalBounds.BoxExtent * Offset - Extent, Extent, InPoints, this, Tree);

	// Remove if empty
	if (Child->LOD == UINT_MAX)
	{
		delete Child;
	}
	else
	{
		Tree->CriticalSection.Lock();
		Child->ChildIndex = NumChildren;
		Children[NumChildren++] = Child;
		Tree->CriticalSection.Unlock();
	}
}

bool FPointCloudOctree::Node::BuildIBCache(TArray<FPointCloudPoint*> *InPoints)
{
	// Store all data inside the first child if it's LOD0, has a Parent and the max LOD is > 1
	// Attempting to do it with a tree of Depth 2 will result in race condition as the LOD0 will already be distributed across threads
	auto CacheNode = (LOD == 0 && Parent && Parent->NumChildren && Tree->GetMaxLOD() > 1) ? Parent->Children[0] : this;

	for (double i = 0; i < InPoints->Num(); i += Tree->SkipValues[LOD])
	{
		CacheNode->LukPointIndices.Add((*InPoints)[(uint32)i]->VertexIndex);  //Store index of point in special array 

		if (Tree->bUsesSprites)
		{
			uint32 idx0 = (*InPoints)[(uint32)i]->VertexIndex * 4;
			uint32 idx1 = idx0 + 1;
			uint32 idx2 = idx0 + 2;

			if (LOD >= Tree->SinglePolySpriteMinimumLOD)
			{
				CacheNode->IBCache.Append({ idx0, idx1, idx2 });
				CacheNode->NumPrimitives++;
			}
			else
			{
				uint32 idx3 = idx0 + 3;

				CacheNode->IBCache.Append({ idx0, idx1, idx2, idx0, idx2, idx3 });
				CacheNode->NumPrimitives += 2;
			}
		}
		else
		{
			CacheNode->IBCache.Add((*InPoints)[(uint32)i]->VertexIndex);
			CacheNode->NumPrimitives++;
		}
	}

	return CacheNode == this;
}

////////////////////////////////////////////////////////////
// FPointCloudOctreeRoot

bool FPointCloudOctree::IsPointUsed(uint32 Index, uint32 Depth)
{
	// Using -1 to save space - this will only ever be used by nodes with depth of 1+ and as such would waste index 0
	uint16 Value = 1 << (Depth - 1);
	return (ReservedPoints[Index] & Value) == Value;
}

void FPointCloudOctree::AddStats(uint32 Depth, uint32 PointCount)
{
	if (bUsesSprites && (MaxLOD - Depth) < SinglePolySpriteMinimumLOD)
	{
		PointCount /= 2;
	}

	Stats[Depth].NumCells++;

	// The only instance the PointCount is 0, is when we are processing non-data-holding LOD0 node. In such case, do not use it for statistical purpose.
	if (PointCount)
	{
		Stats[Depth].PointCount += PointCount;
		Stats[Depth].MinPointCount = Stats[Depth].NumCells == 1 ? PointCount : FMath::Min(Stats[Depth].MinPointCount, PointCount);
		Stats[Depth].MaxPointCount = Stats[Depth].NumCells == 1 ? PointCount : FMath::Max(Stats[Depth].MaxPointCount, PointCount);
	}
}

void FPointCloudOctree::CalculateDistanceThresholds()
{
	// Using add/remove approach to avoid crashes due to render thread still referencing the data
	int32 Delta = PointCloud->GetLODCount() - DistanceThresholds.Num();

	// Add new slots
	if (Delta > 0)
	{
		DistanceThresholds.AddUninitialized(Delta);
	}
	// Remove unnecessary slots
	else if (Delta < 0)
	{
		DistanceThresholds.RemoveAt(PointCloud->GetLODCount(), -Delta);
	}

	// Reassign
	for (int32 i = 0; i < PointCloud->GetLODCount(); i++)
	{
		DistanceThresholds[i] = PointCloud->GetDistanceThreshold(i);
	}
}

void FPointCloudOctree::Rebuild()
{
	// Destroy the tree
	Root.~Node();
	SkipValues.Empty();
	ReservedPoints.Empty();
	Stats.Empty();

	// Apply new parameters
	SinglePolySpriteMinimumLOD = PointCloud->SinglePolySpriteMinimumLOD;
	MaxLOD = PointCloud->GetLODCount() - 1;
	bUsesSprites = PointCloud->UsesSprites();
	MinimumNodePointCount = PointCloud->MinimumNodePointCount;

	// Safety guard
	if (MaxLOD < 0)
	{
		PC_ERROR("MaxLOD is lower than 0!");
		return;
	}

	// Recalculate new values
	for (int32 i = 0; i <= MaxLOD; i++)
	{
		SkipValues.Add(((double)1) / FMath::Pow(1 - FMath::Clamp(PointCloud->LODReduction, 0.0f, 1.0f), i));
	}
	
	ReservedPoints.AddZeroed(PointCloud->GetPointCount(true));
	Stats.AddDefaulted(MaxLOD + 1);

	CalculateDistanceThresholds();	

	// Build Root
	auto Points = FPointCloudHelper::GetEnabledPoints(PointCloud->GetPointCloudData());
	new (&Root) Node(PointCloud->GetBounds().Origin, FVector(PointCloud->GetBounds().BoxExtent.GetMax()), &Points, nullptr, this);

	// Cleanup
	ReservedPoints.Empty();	
}

void FPointCloudOctree::PrintStats()
{
	for (int32 i = 0; i < Stats.Num(); i++)
	{
		PC_LOG("[LOD%d] %s", Stats.Num() - i - 1, *Stats[i].ToString());
	}
}

