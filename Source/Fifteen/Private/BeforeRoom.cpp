// Fill out your copyright notice in the Description page of Project Settings.


#include "BeforeRoom.h"
#include "FifteenGameModeBase.h"
#include <Kismet/GameplayStatics.h>

void UBeforeRoom::NativeConstruct()
{
	gm = Cast<AFifteenGameModeBase>(UGameplayStatics::GetGameMode(this));
	
	UUserWidget::OnTouchStarted();
}
