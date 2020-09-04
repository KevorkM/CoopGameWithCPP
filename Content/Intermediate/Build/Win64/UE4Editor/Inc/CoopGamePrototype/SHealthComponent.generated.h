// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAMEPROTOTYPE_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define COOPGAMEPROTOTYPE_SHealthComponent_generated_h

#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_10_DELEGATE \
struct _Script_CoopGamePrototype_eventOnHealthChangedSignature_Parms \
{ \
	USHealthComponent* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, USHealthComponent* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_CoopGamePrototype_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFriendly) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorA); \
		P_GET_OBJECT(AActor,Z_Param_ActorB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USHealthComponent::IsFriendly(Z_Param_ActorA,Z_Param_ActorB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamageActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFriendly) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorA); \
		P_GET_OBJECT(AActor,Z_Param_ActorB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USHealthComponent::IsFriendly(Z_Param_ActorA,Z_Param_ActorB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamageActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public:


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(USHealthComponent, DefaultHealth); }


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_12_PROLOG
#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_RPC_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_INCLASS \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAMEPROTOTYPE_API UClass* StaticClass<class USHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGamePrototype_Source_CoopGamePrototype_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS