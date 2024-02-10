// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventorySlot.generated.h"

/**
 * 
 */
//DECLARE_DELEGATE(FButtonClickDelegate);
//DECLARE_DELEGATE_OneParam(FButtonClickDelegate_OneParam, int32);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTestDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTestDelegate, int32, SlotClick);

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
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 InventorySlot;
	/*
	UPROPERTY(BlueprintAssignable, Category = "Delegate")
	FButtonClickDelegate FButtonClickDelegate;
	UPROPERTY(BlueprintAssignable, Category = "Delegate")
	FButtonClickDelegate_OneParam FButtonClickDelegate_OneParam
	*/

	UPROPERTY(EditAnywhere,BlueprintAssignable, Category = "Test")
	FTestDelegate ButtonClicked;
};
