// Fill out your copyright notice in the Description page of Project Settings.


#include "FurmidablesHUD.h"
#include "Furmidables/UI/HUD/PlayerHealthbar.h"

void AFurmidablesHUD::BeginPlay()
{
	Super::BeginPlay();

	UPlayerHealthbar* PlayerHealthbar = CreateWidget<UPlayerHealthbar>(GetOwningPlayerController(), PlayerHealthbarClass);
	PlayerHealthbar->AddToViewport();
}