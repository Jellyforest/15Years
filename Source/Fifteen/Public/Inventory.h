// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryStruct.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class FIFTEEN_API UInventory : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* canvasPanel;
	UPROPERTY(meta = (BindWidget))
	class UImage* inventoryImage;
	UPROPERTY(meta = (BindWidget))
	class UOverlay* firstOverlay;
	UPROPERTY(meta = (BindWidget))
	class UButton* firstButton;
	
	UPROPERTY(EditAnywhere)
	FInventoryStruct item;

};
