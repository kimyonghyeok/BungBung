// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayerSessionSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MultiplayListElement.generated.h"

/**
 * 
 */
UCLASS()
class BUNGBUNG_API UMultiplayListElement : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
	
};
