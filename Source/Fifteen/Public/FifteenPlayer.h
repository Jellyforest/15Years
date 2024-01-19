// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FifteenPlayer.generated.h"

UCLASS()
class FIFTEEN_API AFifteenPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFifteenPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = Input)
	class APlayerController* playerController;
	//동작
	UPROPERTY(EditAnywhere, Category=Input)
	class UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, Category=Input)
	class UInputAction* SetTouchAction;
	UPROPERTY(EditAnywhere, Category=Input)
	class UInputAction* SetClickAction;

	// 콜리전 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collision)
	class USphereComponent* sphereComp;
	
	FVector CachedDestination;


	// click 효과
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UNiagaraSystem* FXClick;

	//처음 13살 방 튜토 위젯
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BeforeWidget")
	class UBeforeRoom* beforeWidget;

	//동작
	void OnTouchTriggered();
	void OnTouchReleased();
	float mouseX;
	float mouseY;

};
