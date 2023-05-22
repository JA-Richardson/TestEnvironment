// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Error, TEXT("Item spawned"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Item spawned"));
	}
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Delta time: %f"), DeltaTime);
	
	if (GEngine)
	{
		FString name = GetName();
		FString msg = FString::Printf(TEXT("Item name: %s"), *name);
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, msg);

		UE_LOG(LogTemp, Warning, TEXT("Item name: %s"), *name);
	}
	
}

