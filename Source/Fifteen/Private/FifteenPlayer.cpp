// Fill out your copyright notice in the Description page of Project Settings.


#include "FifteenPlayer.h"
#include "BeforeRoom.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AFifteenPlayer::AFifteenPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//beforeWidget = CreateDefaultSubobject<UBeforeRoom>(TEXT("beforeWidget"));
}

// Called when the game starts or when spawned
void AFifteenPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	if (playerController)
	{
		auto localPlayer = playerController->GetLocalPlayer();
		auto subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(localPlayer);
		if (subSystem)
		{
			subSystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	//마우스커서 보이기
	playerController = GetWorld()->GetFirstPlayerController();
	playerController->bShowMouseCursor = true;
	playerController->bEnableClickEvents = true;

}

// Called every frame
void AFifteenPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFifteenPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* inputSystem = Cast <UEnhancedInputComponent>(InputComponent);
	if(inputSystem)
	{
		inputSystem->BindAction(SetClickAction, ETriggerEvent::Triggered, this, &AFifteenPlayer::OnTouchTriggered);
		inputSystem->BindAction(SetClickAction, ETriggerEvent::Completed, this, &AFifteenPlayer::OnTouchReleased);
		inputSystem->BindAction(SetClickAction, ETriggerEvent::Canceled, this, &AFifteenPlayer::OnTouchReleased);

		inputSystem->BindAction(SetTouchAction, ETriggerEvent::Triggered, this, &AFifteenPlayer::OnTouchTriggered);
		inputSystem->BindAction(SetTouchAction, ETriggerEvent::Completed, this, &AFifteenPlayer::OnTouchReleased);
		inputSystem->BindAction(SetTouchAction, ETriggerEvent::Canceled, this, &AFifteenPlayer::OnTouchReleased);
	}

}

void AFifteenPlayer::OnTouchTriggered()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("touch11"));
	playerController->GetMousePosition(mouseX, mouseY);
	FVector2D mousePoint(mouseX, mouseY);

	FVector mouseHit(mouseX, mouseY, 0.0f);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXClick, mouseHit, FRotator::ZeroRotator);
	UE_LOG(LogTemp, Warning, TEXT("Mouse Location: %f, %f, %s"), mouseX, mouseY, *mouseHit.ToString());

	//AActor* cleanFX = GetWorld()->SpawnActor<ACleaningEffect>(cleaner->cleaningEffect, cleaner->cleanerHeadComp->GetComponentLocation(), cleaner->cleanerHeadComp->GetComponentRotation());
}

void AFifteenPlayer::OnTouchReleased()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Released11"));

}