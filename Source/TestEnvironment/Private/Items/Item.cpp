// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "TestEnvironment/DebugMacro.h"



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
	
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	UWorld* World = GetWorld();
		
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Movement speed in cm/s
	float MovementSpeed = 50.f;
	float RotationSpeed = 50.f;

	//MovementSpeed * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	AddActorWorldOffset(FVector(MovementSpeed * DeltaTime, 0.f, 0.f));
	AddActorWorldRotation(FRotator(0.f, RotationSpeed * DeltaTime, 0.f));


	DRAW_DEBUG_SPHERE_ONEFRAME(GetActorLocation())
	//DRAW_DEBUG_LINE_ONEFRAME(Location, Location + Forward * 100)
	//DRAW_DEBUG_POINT_ONEFRAME(Location)
		DRAW_DEBUG_VECTOR_ONEFRAME(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100)
	
	
}

