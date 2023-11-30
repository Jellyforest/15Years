// Fill out your copyright notice in the Description page of Project Settings.


#include "FifteenPlayer.h"

// Sets default values
AFifteenPlayer::AFifteenPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFifteenPlayer::BeginPlay()
{
	Super::BeginPlay();
	
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

}

