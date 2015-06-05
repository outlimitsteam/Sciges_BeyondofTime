// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Sciges_BeyondofTime.h"
#include "Sciges_BeyondofTimeGameMode.h"
#include "Sciges_BeyondofTimeCharacter.h"

ASciges_BeyondofTimeGameMode::ASciges_BeyondofTimeGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
