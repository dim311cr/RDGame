// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"
#include "GameplayEffectExtension.h"



UVitalAttributeSet::UVitalAttributeSet()
{
    Health = 100.0f;
    MaxHealth = 100.0f;
    Mana = 50.0f;
    MaxMana = 50.0f;
}

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    if (Attribute == GetHealthAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, MaxHealth.GetCurrentValue());
    }
}