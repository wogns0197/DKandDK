// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHud.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTD_API UBaseHud : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_Money;

public:
	void AddMoney( int8 n );

private:
	const FString& GetMoneyText();

private:
	FString MoneyString;
	int64 MoneyNum;
};
