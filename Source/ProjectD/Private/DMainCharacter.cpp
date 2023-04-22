g// Fill out your copyright notice in the Description page of Project Settings.


#include "DMainCharacter.h"

// Sets default values
ADMainCharacter::ADMainCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

