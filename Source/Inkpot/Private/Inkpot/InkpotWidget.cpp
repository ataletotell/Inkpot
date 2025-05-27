#include "Inkpot/InkpotWidget.h"

void UInkpotWidget::ShowStory(UInkpotStory *InStory)
{
    InkStory = InStory;
    ReceiveOnShowStory(InkStory);
}
