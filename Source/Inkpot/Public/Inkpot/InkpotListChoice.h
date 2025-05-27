#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "InkpotListChoice.generated.h"

UCLASS(BlueprintType, Blueprintable)
class INKPOT_API UInkpotListChoice : public UUserWidget, public IUserObjectListEntry
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Inkpot", meta = (DisplayName = "OnTextUpdate"))
    void ReceiveOnTextUpdate(const FText &InText);

    virtual void NativeOnListItemObjectSet(UObject *ListItemObject) override;
};