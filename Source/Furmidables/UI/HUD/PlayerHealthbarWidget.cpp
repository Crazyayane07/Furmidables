// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHealthbarWidget.h"
#include "Furmidables/Player/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Furmidables/Components/DamageHandlerComp.h"

void UPlayerHealthbarWidget::BindForEventToUpdateHealthbar()
{
	APlayerCharacter* Player = (APlayerCharacter*)UGameplayStatics::GetPlayerCharacter(this, 0);

	if (Player)
	{
		Player->DamageHandlerComp->OnChangeHealth.AddDynamic(this, &UPlayerHealthbarWidget::OnChangeHealth);
		OnChangeHealth(Player->DamageHandlerComp->MaxHealth, Player->DamageHandlerComp->MaxHealth);
	}
}
