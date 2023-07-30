// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OneInteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UOneInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class JOYOFDISCOVERY_API IOneInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
void ForceInteraction(float ForceAmount);

UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
float FormulaUpdate();

UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
void CollisionCheck(ObjectType OtherObjectType,ObjectType OwnObjectType);

};
