#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InkpotWidget.generated.h"

class UInkpotStory;

UCLASS(Abstract, Blueprintable)
class INKPOT_API UInkpotWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "InkpotDemo")
    void ShowStory(UInkpotStory *Story);

    UFUNCTION(BlueprintImplementableEvent, Category = "InkpotDemo", meta = (DisplayName = "OnShowStory"))
    void ReceiveOnShowStory(UInkpotStory *Story);

private:
    UPROPERTY(VisibleAnywhere, Transient)
    UInkpotStory *InkStory{nullptr};
};
