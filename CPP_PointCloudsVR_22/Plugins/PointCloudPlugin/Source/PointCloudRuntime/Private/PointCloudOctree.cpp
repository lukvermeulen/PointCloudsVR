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

#include "EngineGlobals.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "DrawDebugHelpers.h"
#include <Runtime/Engine/Classes/GameFramework/Actor.h>

////////////////////////////////////////////////////////////
// FPointCloudOctreeNode

//LUK CODE
TArray<uint32> TmpTouchedPointsIndex;   //stores indecies to Points
TArray<TArray<uint32>> SelectionList;   //List of individual selections

void FPointCloudOctree::ColorCollectedPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points, FColor pColor) 
{
	for (auto const &index : SelectionList[SelectionListIndex])
	{
		Points[index].Color=pColor;
	}
}

void FPointCloudOctree::HideCollectedPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points)
{
	for (auto const &index : SelectionList[SelectionListIndex])
	{
		Points[index].SetEnabled(false);
		Points[index].SetEnabledOverride(true);
	}
}

void FPointCloudOctree::DeleteCollectedPoints(int32 SelectionListIndex, TArray<FPointCloudPoint> &Points)
{
	for (auto const &index : SelectionList[SelectionListIndex])
	{
		Points.RemoveAt(index); // Only call at end! Indexes need to probably be refreshed somehow to work runtime
	}
}

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
			SelectionList[SelectionListIndex].AddUnique(pointIndex);                           // Add the Index of the Point to the collection
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

			DrawDebugBox(myworld, center, extent, FColor::Red, false, 10, 0, 5);
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
		CacheNode->LukPointIndices.Add((*InPoints)[(uint32)i]->VertexIndex);

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

