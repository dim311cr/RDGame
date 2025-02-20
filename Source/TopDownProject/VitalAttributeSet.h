// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPROJECT_API UVitalAttributeSet : public UTopDownAttributeSet
{
	GENERATED_BODY()
	
	public:
    UVitalAttributeSet();

    UPROPERTY(BlueprintReadOnly, Category = "Vital")
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health)

    UPROPERTY(BlueprintReadOnly, Category = "Vital")
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth)

    UPROPERTY(BlueprintReadOnly, Category = "Vital")
    FGameplayAttributeData Mana;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Mana)

    UPROPERTY(BlueprintReadOnly, Category = "Vital")
    FGameplayAttributeData MaxMana;
    ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxMana)

protected:
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

};
