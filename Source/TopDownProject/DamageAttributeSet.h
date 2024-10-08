// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownAttributeSet.h"
#include "DamageAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPROJECT_API UDamageAttributeSet : public UTopDownAttributeSet
{
	GENERATED_BODY()
	
public:
    UDamageAttributeSet();

    UPROPERTY(BlueprintReadOnly, Category = "Damage")
    FGameplayAttributeData Damage;
    ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage)

        UPROPERTY(BlueprintReadOnly, Category = "Damage")
    FGameplayAttributeData Resistance;
    ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Resistance)
};
