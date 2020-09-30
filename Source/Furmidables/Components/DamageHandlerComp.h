// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageHandlerComp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeHealth, int, CurrentHealth, int, MaxHealth);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FURMIDABLES_API UDamageHandlerComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageHandlerComp();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int GetCurrentHealth();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FChangeHealth OnChangeHealth;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	int MaxHealth = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	bool bIsDamageable = true;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	int CurrentHealth;
};
