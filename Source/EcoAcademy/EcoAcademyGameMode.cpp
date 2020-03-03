// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EcoAcademyGameMode.h"
#include "EcoAcademyCharacter.h"

AEcoAcademyGameMode::AEcoAcademyGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AEcoAcademyCharacter::StaticClass();	
}
