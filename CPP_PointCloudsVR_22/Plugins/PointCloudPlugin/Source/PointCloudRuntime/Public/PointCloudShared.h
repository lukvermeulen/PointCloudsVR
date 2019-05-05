// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.generated.h"

#define BOOL2STR(v) (v ? TEXT("True") : TEXT("False"))
#define PC_LOG(Format, ...) UE_LOG(LogTemp, Warning, TEXT(Format), __VA_ARGS__)
#define PC_ERROR(Format, ...) UE_LOG(LogTemp, Error, TEXT(Format), __VA_ARGS__)

UENUM(BlueprintType)
enum class EPointCloudOffset : uint8
{
	None,
	Center,
	FirstPoint
};

UENUM(BlueprintType)
enum class EPointCloudColorMode : uint8
{
	None,
	Intensity,
	RGB
};

/** #todo To be removed and replaced by something more optimized, as this one potentially wastes a lot of memory. */
USTRUCT(BlueprintType)
struct POINTCLOUDRUNTIME_API FPointCloudPoint
{
	GENERATED_BODY()

	FVector OriginalLocation;
	FVector Location;
	FColor Color;

	/** Enabled | EnabledOverride | 6x Unused */
	uint8 Flags;

	/** Holds the vertex index of this point */
	uint32 VertexIndex;

	FPointCloudPoint() {}
	FPointCloudPoint(FVector Location, FColor Color, bool bEnabled)
		: OriginalLocation(Location)
		, Location(Location)
		, Color(FLinearColor(Color).ToFColor(true))
		, Flags(0x00000000)
	{
		SetEnabled(bEnabled);
	}
	FPointCloudPoint(float &X, float &Y, float &Z)
		: Flags(0x00000001)
	{
		Location.X = X;
		Location.Y = Y;
		Location.Z = Z;
		Color = FColor::White;
		OriginalLocation = Location;
	}
	FPointCloudPoint(float &X, float &Y, float &Z, float &I)
		: FPointCloudPoint(X, Y, Z)
	{
		Color.R = FMath::FloorToInt(FMath::Clamp(I, 0.0f, 1.0f) * 255.999f);
	}
	FPointCloudPoint(float &X, float &Y, float &Z, float &R, float &G, float &B, float &A)
		: FPointCloudPoint(X, Y, Z)
	{
		Color = FLinearColor(R, G, B, A).ToFColor(false);
	}

	FORCEINLINE bool IsEnabled() const { return (Flags & 0x00000001) == 0x00000001; }
	FORCEINLINE void SetEnabled(bool NewEnabled) { Flags = NewEnabled ? (Flags | 0x00000001) : (Flags & 0x11111110); }

	FORCEINLINE bool IsEnabledOverriden() const { return (Flags & 0x00000010) == 0x00000010; }
	FORCEINLINE void SetEnabledOverride(bool NewEnabled) { Flags = NewEnabled ? (Flags | 0x00000010) : (Flags & 0x11111101); }

	FORCEINLINE float GridDistance(FPointCloudPoint *point) const { return (point->Location - Location).GetAbsMax(); }
	FORCEINLINE void AddColor(FLinearColor InColor) { Color = InColor.ToFColor(false); }

	FORCEINLINE FString ToString() const { return FString::Printf(TEXT("E: %s, OL: %s, L: %s, C: %s"), BOOL2STR(IsEnabled()), *OriginalLocation.ToString(), *Location.ToString(), *Color.ToString()); }
};

struct FBenchmarkTimer
{
	static void Reset()
	{
		Time = FPlatformTime::Seconds();
	}
	static double Split()
	{
		double Now = FPlatformTime::Seconds();
		double Delta = Now - Time;
		Time = Now;

		return FMath::RoundToDouble(Delta * 100) * 0.01;
	}
	static void Log(FString Text)
	{
		PC_LOG("%s: %f", *Text, Split());
	}

private:
	static double Time;
};
