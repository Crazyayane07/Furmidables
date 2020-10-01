// Fill out your copyright notice in the Description page of Project Settings.


#include "StrongholdHealthbarWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Furmidables/Components/DamageHandlerComp.h"
#include "Furmidables/Stronghold/Stronghold.h"

void UStrongholdHealthbarWidget::BindForEventToUpdateHealthbar()
{
	AStronghold* Stronghold = (AStronghold*)UGameplayStatics::GetActorOfClass(GetWorld(), StrongholdClass);

	if (Stronghold) 
	{
		Stronghold->DamageHandlerComp->OnChangeHealth.AddDynamic(this, &UHealthbarWidget::OnChangeHealth);
		OnChangeHealth(Stronghold->DamageHandlerComp->MaxHealth, Stronghold->DamageHandlerComp->MaxHealth);
	}
}
