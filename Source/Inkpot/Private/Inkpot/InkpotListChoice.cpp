#include "Inkpot/InkpotListChoice.h"
#include "Inkpot/InkpotChoice.h" // Adjust if needed

void UInkpotListChoice::NativeOnListItemObjectSet(UObject *InListItemObject)
{
    UInkpotChoice *choice = Cast<UInkpotChoice>(InListItemObject);
    if (!choice)
        return;

    FText text = FText::FromString(choice->GetString());
    ReceiveOnTextUpdate(text); // Calls BlueprintImplementableEvent
}