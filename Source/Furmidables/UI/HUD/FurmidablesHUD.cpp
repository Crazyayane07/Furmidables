// Fill out your copyright notice in the Description page of Project Settings.


#include "FurmidablesHUD.h"
#include "Furmidables/UI/HealthbarWidget.h"

void AFurmidablesHUD::BeginPlay()
{
	Super::BeginPlay();

	UHealthbarWidget* PlayerHealthbarWidget = CreateWidget<UHealthbarWidget>(GetOwningPlayerController(), PlayerHealthbarClass);
	PlayerHealthbarWidget->AddToViewport();

	UHealthbarWidget* StrongholdHealthbarWidget = CreateWidget<UHealthbarWidget>(GetOwningPlayerController(), StrongholdHealthbarClass);
	StrongholdHealthbarWidget->AddToViewport();
}