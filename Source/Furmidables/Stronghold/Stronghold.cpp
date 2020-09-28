// Fill out your copyright notice in the Description page of Project Settings.


#include "Stronghold.h"
#include "Furmidables/Components/DamageHandlerComp.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AStronghold::AStronghold()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootComponent);

	DamageHandlerComp = CreateDefaultSubobject<UDamageHandlerComp>(TEXT("DamageHandlerComp"));
}

// Called when the game starts or when spawned
void AStronghold::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStronghold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

