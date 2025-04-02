// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveWorldUserWidget.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanel.h"
#include "Components/Overlay.h"
#include "Kismet/GameplayStatics.h"
#include "Logging/StructuredLog.h"


void UWaveWorldUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!IsValid(AttachedActor))
	{
		RemoveFromParent();

		UE_LOGFMT(LogTemp, Warning, "AttachedActor no longer valid, removing Health Widget.");
		return;
	}

	FVector2D ScreenPosition;
	const bool bIsOnScreen = UGameplayStatics::ProjectWorldToScreen(GetOwningPlayer(), AttachedActor->GetActorLocation() + WorldOffset, ScreenPosition);

	if (bIsOnScreen)
	{
		float Scale = UWidgetLayoutLibrary::GetViewportScale(this);

		ScreenPosition /= Scale;

		ParentOverlay->SetRenderTranslation(ScreenPosition);
	}
	
	if (bWasOnScreen != bIsOnScreen)
	{
		ParentOverlay->SetVisibility(bIsOnScreen ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}

	bWasOnScreen = bIsOnScreen;
}

void UWaveWorldUserWidget::AddToRootCanvasPanel(UUserWidget* InNewWidget)
{
	TArray<UUserWidget*> Widgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(InNewWidget, Widgets, UUserWidget::StaticClass(), true);
	
	if (Widgets.Num() > 0)
	{
		const UUserWidget* const MainHUD = Widgets[0];
		UCanvasPanel* const CanvasPanel = Cast<UCanvasPanel>(MainHUD->GetRootWidget());
		CanvasPanel->AddChild(InNewWidget);
	}
}
