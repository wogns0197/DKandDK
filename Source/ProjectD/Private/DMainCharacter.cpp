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
	// �̰� �ʱ�ȭ�� �ְ������.. Begin Play�� �� ���Ͱ� ���� ���� ȣ��Ǿ ������ �ٲ���ϴ� �ʱ�ȭ �Լ��� �ʿ���
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
