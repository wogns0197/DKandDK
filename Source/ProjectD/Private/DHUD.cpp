// Fill out your copyright notice in the Description page of Project Settings.


#include "DHUD.h"

void ADHUD::BeginPlay()
{
	Super::BeginPlay();

	if ( BaseHudClass )
	{
		BaseHud = CreateWidget(GetWorld(), BaseHudClass );
		if ( BaseHud )
		{
			BaseHud->AddToViewport( 0 );
		}
	}
}