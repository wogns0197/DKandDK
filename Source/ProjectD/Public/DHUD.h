// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTD_API ADHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> BaseHudClass;

	UPROPERTY()
	UUserWidget* BaseHud;

protected:
	virtual void BeginPlay() override;
};
