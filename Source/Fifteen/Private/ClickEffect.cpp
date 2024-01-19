// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickEffect.h"
#include "Components/SphereComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values
AClickEffect::AClickEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	clickComp = CreateDefaultSubobject<USphereComponent>(TEXT("sphere Collision"));
	SetRootComponent(clickComp);
	naiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("naiagaraComp"));
	naiagaraComp->SetupAttachment(clickComp);
}

// Called when the game starts or when spawned
void AClickEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClickEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

