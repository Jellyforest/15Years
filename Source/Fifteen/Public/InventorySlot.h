// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventorySlot.generated.h"

/**
 * 
 */
UCLASS()
class FIFTEEN_API UInventorySlot : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	class UButton* itemButton;
	UPROPERTY(meta = (BindWidget))
	class UImage* itemImage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UTexture2D* pickupImage;
};
