// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudComponent.h"
#include "Engine/CollisionProfile.h"
#include "PointCloud.h"

UPointCloudPluginComponent::UPointCloudPluginComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	Mobility = EComponentMobility::Static;
	SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
}

int32 UPointCloudPluginComponent::GetNumMaterials() const
{
	return PointCloud ? PointCloud->GetNumMaterials() : 0;
}

UMaterialInterface* UPointCloudPluginComponent::GetMaterial(int32 ElementIndex) const
{
	return PointCloud ? PointCloud->GetMaterial(ElementIndex) : nullptr;
}

FBoxSphereBounds UPointCloudPluginComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return PointCloud != NULL ? PointCloud->GetBounds().TransformBy(LocalToWorld) : USceneComponent::CalcBounds(LocalToWorld);
}

void UPointCloudPluginComponent::AttachPointCloudListener()
{
	if (PointCloud)
	{
		PointCloud->OnPointCloudRebuilt().AddUObject(this, &UPointCloudPluginComponent::OnPointCloudRebuilt);
	}
}

void UPointCloudPluginComponent::RemovePointCloudListener()
{
	if (PointCloud)
	{
		PointCloud->OnPointCloudRebuilt().RemoveAll(this);
	}
}

void UPointCloudPluginComponent::OnPointCloudRebuilt()
{
	MarkRenderStateDirty();
	UpdateBounds();
}

void UPointCloudPluginComponent::SetPointCloud(UPointCloud *InPointCloud)
{
	if (PointCloud != InPointCloud)
	{
		RemovePointCloudListener();
		PointCloud = InPointCloud;
		AttachPointCloudListener();	
		OnPointCloudRebuilt();
	}
}

void UPointCloudPluginComponent::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UPointCloudPluginComponent* This = CastChecked<UPointCloudPluginComponent>(InThis);
	Super::AddReferencedObjects(This, Collector);
}

#if WITH_EDITOR
void UPointCloudPluginComponent::PostLoad()
{
	Super::PostLoad();
	AttachPointCloudListener();
}

void UPointCloudPluginComponent::PreEditChange(UProperty* PropertyThatWillChange)
{
	Super::PreEditChange(PropertyThatWillChange);

	if (PropertyThatWillChange && PropertyThatWillChange->GetName().Equals("PointCloud"))
	{
		RemovePointCloudListener();
	}
}

void UPointCloudPluginComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.MemberProperty)
	{
		if (PropertyChangedEvent.MemberProperty->GetName().Equals("PointCloud"))
		{
			AttachPointCloudListener();
		}
	}
}
#endif