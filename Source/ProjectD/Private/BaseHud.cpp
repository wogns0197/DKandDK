#include "BaseHud.h"
#include "Components/TextBlock.h"

void UBaseHud::AddMoney( int8 n )
{
	MoneyNum += n;

	Text_Money->SetText( FText::FromString( GetMoneyText() ) );
}

const FString& UBaseHud::GetMoneyText()
{
	MoneyString = FString::FormatAsNumber( MoneyNum );
	return MoneyString;
}