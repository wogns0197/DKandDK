// Fill out your copyright notice in the Description page of Project Settings.


#include "DMainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "BaseHud.h"
#include "DHUD.h"

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
	
	if ( !OnClicked.IsBound() )
		OnClicked.AddDynamic( this, &ADMainCharacter::OnClicked_Character );

}

// Called every frame
void ADMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADMainCharacter::OnClicked_Character( class AActor* TouchedActor , FKey ButtonPressed )
{
	// 이거 초기화에 넣고싶은데.. Begin Play가 이 액터가 제일 먼저 호출되어서 순서를 바꿔야하는 초기화 함수가 필요함
	if ( !Hud.IsValid() )
	{
		APlayerController* pc = UGameplayStatics::GetPlayerController( this, 0 );
		if ( pc )
		{
			Hud = Cast<ADHUD>( pc->GetHUD() );
			if ( Hud.IsValid() ) {
				BaseHudWidget = Cast<UBaseHud>( Hud->GetBaseHud() );
			}
		}
	}

	if ( BaseHudWidget.IsValid() )
	{
		BaseHudWidget->AddMoney(99);
	}
}
