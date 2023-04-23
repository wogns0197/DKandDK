// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DMainCharacter.generated.h"

UCLASS()
class PROJECTD_API ADMainCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
	void OnClicked_Character( class AActor* TouchedActor, FKey ButtonPressed );

private:
	TWeakObjectPtr<class ADHUD> Hud;

	UPROPERTY()
	TWeakObjectPtr<class UBaseHud> BaseHudWidget;

};
