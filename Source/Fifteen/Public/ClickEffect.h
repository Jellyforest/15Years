// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClickEffect.generated.h"

UCLASS()
class FIFTEEN_API AClickEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClickEffect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Effect)
	class UNiagaraSystem* clickPoint;
	UPROPERTY(EditAnywhere, Category = Effect)
	class USphereComponent* clickComp;
	UPROPERTY(EditAnywhere, Category = Effect)
	class UNiagaraComponent* naiagaraComp;


};
