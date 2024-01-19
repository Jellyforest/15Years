// Fill out your copyright notice in the Description page of Project Settings.


#include "Drawer.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"


// Sets default values
ADrawer::ADrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	closeDrawer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("closerDrawerMesh"));
	openDrawer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("openDrawerMesh"));
	//SetRootComponent(closeDrawer);
	//drawer_First = CreateDefaultSubobject<UBoxComponent>(TEXT("firstComp"));
	//drawer_First->SetupAttachment(closeDrawer);
	//drawer_First->SetCollisionProfileName(TEXT("DrawerPreset"));
	//openDraw = CreateDefaultSubobject<UStaticMesh>(TEXT("open"));
}

// Called when the game starts or when spawned
void ADrawer::BeginPlay()
{
	Super::BeginPlay();

	setTrue = 1;
	//drawer_First->OnComponentBeginOverlap.AddDynamic(this, &ADrawer::OnOverlap);
	//drawer_First->SetGenerateOverlapEvents(true);
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADrawer::Closeup()
{
	
}

void ADrawer::FirstOpen()
{

	if (setTrue == 1)
	{
		setTrue = 0;
		//closeDrawer->SetStaticMesh(openDrawer);
		//UE_LOG(LogTemp, Warning, TEXT("set open"));
	}

}

/*
void ADrawer::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("overlap"));
}
*/
