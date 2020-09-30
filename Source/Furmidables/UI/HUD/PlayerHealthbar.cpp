// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHealthbar.h"
#include "Furmidables/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Furmidables/Components/DamageHandlerComp.h"

void UPlayerHealthbar::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerCharacter* Player = (APlayerCharacter*)UGameplayStatics::GetPlayerCharacter(this, 0);

	if (Player)
	{
		Player->DamageHandlerComp->OnChangeHealth.AddDynamic(this, &UPlayerHealthbar::OnChangeHealth);
		OnChangeHealth(Player->DamageHandlerComp->MaxHealth, Player->DamageHandlerComp->MaxHealth);
	}
}
