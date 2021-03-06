// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Furmidables/UI/HealthbarWidget.h"
#include "PlayerHealthbarWidget.generated.h"

/**
 * 
 */
UCLASS()
class FURMIDABLES_API UPlayerHealthbarWidget : public UHealthbarWidget
{
	GENERATED_BODY()

public:

	virtual void BindForEventToUpdateHealthbar() override;
};
