// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FurmidablesHUD.generated.h"

/**
 * 
 */

class UHealthbarWidget;

UCLASS()
class FURMIDABLES_API AFurmidablesHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UHealthbarWidget> PlayerHealthbarClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UHealthbarWidget> StrongholdHealthbarClass;
};
