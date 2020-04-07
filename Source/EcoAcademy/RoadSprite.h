// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "RoadSprite.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class ECOACADEMY_API URoadSprite : public UPaperSprite
{
	GENERATED_BODY()

public:
//    UPROPERTY(BlueprintReadWrite, EditAnywhere)
//    TArray<FVector2D> SpriteVertices;

    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture2D* texture);

	UFUNCTION(BlueprintCallable)
    void SetVertices(TArray<FVector2D> vertices);

	
};
