// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryStruct.h"
#include "InventorySlot.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInventoryStruct item;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	//TSubclassOf <class UInventorySlot> inventorySlot;
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UInventorySlot* inventorySlot_5;
	*/
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool activateInventory;

	//¹è¿­TArray<TSubclassOf<UClass>>?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray <TSubclassOf<UInventorySlot>> slotArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray <FInventoryStruct> itemArray;

	UFUNCTION(BlueprintCallable)
	void RefreshInventory();

};
