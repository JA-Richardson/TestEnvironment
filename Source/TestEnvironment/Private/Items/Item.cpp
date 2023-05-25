// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "TestEnvironment/DebugMacro.h"



// Sets default values
AItem::AItem() : RunTimer(0), Amplitude(.25f), TimeConstant(5.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	RootComponent = ItemMesh;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	
		
}

float AItem::TransformedSine()
{
	return Amplitude * FMath::Sin(RunTimer * TimeConstant);
}

float AItem::TransformedCosine()
{
	return Amplitude * FMath::Cos(RunTimer * TimeConstant);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunTimer += DeltaTime;	
	
}

