// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthbarWidget.generated.h"

/**
 * 
 */
UCLASS()
class FURMIDABLES_API UHealthbarWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;

	virtual void BindForEventToUpdateHealthbar() {};

	UFUNCTION(BlueprintImplementableEvent)
	void OnChangeHealth(int CurrentHealth, int MaxHealth);
};
