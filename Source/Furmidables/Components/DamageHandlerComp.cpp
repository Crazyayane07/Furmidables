// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageHandlerComp.h"

// Sets default values for this component's properties
UDamageHandlerComp::UDamageHandlerComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UDamageHandlerComp::BeginPlay()
{
	Super::BeginPlay();

	// ...

	AActor* Owner = GetOwner();
	if (Owner) 
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UDamageHandlerComp::TakeDamage);
	}
}

void UDamageHandlerComp::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!bIsDamageable)
		return;

	if (Damage <= 0)
		return;

	Health -= Damage;

	UE_LOG(LogTemp, Log, TEXT("Health = %i"), Health);
}

// Called every frame
void UDamageHandlerComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

