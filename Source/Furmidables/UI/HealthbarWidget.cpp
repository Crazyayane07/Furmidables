// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthbarWidget.h"

void UHealthbarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BindForEventToUpdateHealthbar();
}