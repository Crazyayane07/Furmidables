// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Furmidables/UI/HealthbarWidget.h"
#include "StrongholdHealthbarWidget.generated.h"

/**
 * 
 */

class AStronghold;

UCLASS()
class FURMIDABLES_API UStrongholdHealthbarWidget : public UHealthbarWidget
{
	GENERATED_BODY()

public:

	virtual void BindForEventToUpdateHealthbar() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SetUp")
	TSubclassOf<class AActor> StrongholdClass;
};
