// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Stronghold.generated.h"

class UDamageHandlerComp;
class UStaticMeshComponent;

UCLASS()
class FURMIDABLES_API AStronghold : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStronghold();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UDamageHandlerComp* DamageHandlerComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
