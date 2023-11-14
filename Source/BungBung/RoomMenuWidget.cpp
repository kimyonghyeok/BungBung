// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomMenuWidget.h"

#include "OnlineSubsystem.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"

void URoomMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &ThisClass::URoomMenuWidget::StartButtonClicked);
	}
}

void URoomMenuWidget::StartButtonClicked()
{
	MenuTearDown();
}

void URoomMenuWidget::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if(World)
	{
		APlayerController* PlayerController =World->GetFirstPlayerController();
		if(PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
