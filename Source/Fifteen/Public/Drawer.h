// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Drawer.generated.h"

UCLASS()
class FIFTEEN_API ADrawer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrawer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
	class UStaticMeshComponent* closeDrawer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
	class UStaticMeshComponent* openDrawer;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
	//class UStaticMesh* openDraw;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setting)
	//class UBoxComponent* drawer_First;
	
	//서랍 클로즈업
	UFUNCTION(BlueprintCallable)
	void Closeup();
	//첫번째 서랍 오픈
	UFUNCTION(BlueprintCallable)
	void FirstOpen();

	int32 setTrue;
	//UFUNCTION()
	//void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
