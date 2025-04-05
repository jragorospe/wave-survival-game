// Fill out your copyright notice in the Description page of Project Settings.


#include "SharedGameplayTags.h"


namespace SharedGameplayTags
{
	// Actions
	UE_DEFINE_GAMEPLAY_TAG(Action_Sprint, "Action.Sprint");
	UE_DEFINE_GAMEPLAY_TAG(Action_PrimaryAttack, "Action.PrimaryAttack");
	UE_DEFINE_GAMEPLAY_TAG(Action_SecondaryAttack, "Action.SecondaryAttack");
	UE_DEFINE_GAMEPLAY_TAG(Action_BlackHole, "Action.BlackHole");
	UE_DEFINE_GAMEPLAY_TAG(Action_Dash, "Action.Dash");
	UE_DEFINE_GAMEPLAY_TAG(Action_Melee, "Action.Melee");
	
	// Attributes
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Health, "Attribute.Health");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_HealthMax, "Attribute.HealthMax");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_AttackDamage, "Attribute.AttackDamage");
	
	// UE_DEFINE_GAMEPLAY_TAG_COMMENT()
}