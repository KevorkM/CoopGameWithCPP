// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAMEPROTOTYPE_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPGAMEPROTOTYPE_SWeapon_generated_h

#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	COOPGAMEPROTOTYPE_API static class UScriptStruct* StaticStruct();


template<> COOPGAMEPROTOTYPE_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_EVENT_PARMS
#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_CALLBACK_WRAPPERS
#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ASWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ASWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ASWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ASWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(ASWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(ASWeapon, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ASWeapon, HitScanTrace); }


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_30_PROLOG \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_EVENT_PARMS


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_RPC_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_CALLBACK_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_INCLASS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_CALLBACK_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_INCLASS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAMEPROTOTYPE_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGamePrototype_Source_CoopGamePrototype_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS