// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "PointCloudActor.generated.h"

class UPointCloud;
class UPointCloudPluginComponent;

UCLASS(BlueprintType, hidecategories = ("Materials"))
class POINTCLOUDRUNTIME_API APointCloudActor : public AActor
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(Category = PointCloudActor, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Rendering,Components|PointCloud", AllowPrivateAccess = "true"))
	UPointCloudPluginComponent* PointCloudComponent;

public:
#if WITH_EDITOR
	virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override;
#endif

public:
	/** Returns PointCloudComponent subobject **/
	UPointCloudPluginComponent* GetPointCloudComponent() const { return PointCloudComponent; }
};