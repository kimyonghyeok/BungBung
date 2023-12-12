// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayRoomSessionObject.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MultiplayerSessionSubsystem.h"
#include "MultiplayerTileView.h"
#include "UserObject.h"
#include "Components/TextBlock.h"
#include "RoomMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class BUNGBUNG_API URoomMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

protected:
	UMultiplayerSessionSubsystem* MultiplayerSessionSubsystem;
	
	UPROPERTY(meta=(BindWidget))
	UButton* StartButton;
	UPROPERTY(meta=(BindWidget))
	UTextBlock* StartButtonText;
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UMultiplayerTileView* MultiplayerTileView;

	UUserObject* UserData;

private:
	void MenuTearDown();
};
