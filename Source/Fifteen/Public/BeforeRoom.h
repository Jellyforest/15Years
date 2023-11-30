// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BeforeRoom.generated.h"

/**
 * 
 */
UCLASS()
class FIFTEEN_API UBeforeRoom : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;


public:

	UPROPERTY()
	class AFifteenGameModeBase* gm;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* canvasPanel;

};
