// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHealthbar.generated.h"

UCLASS()
class FURMIDABLES_API UPlayerHealthbar : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnChangeHealth(int CurrentHealth, int MaxHealth);
};
