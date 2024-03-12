// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryStruct.generated.h"

/**
 * 
 */
class FIFTEEN_API InventoryStruct
{
public:
	InventoryStruct();
	~InventoryStruct();
};

USTRUCT(Atomic, BlueprintType)
struct FInventoryStruct
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	class AActor* item;
	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	class UTexture2D* itemImage;
	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	FText clickItem;
	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	class UStaticMeshComponent* itemMesh;
	UPROPERTY(EditAnywhere,BluePrintReadWrite)
	int32 itemNum;


};