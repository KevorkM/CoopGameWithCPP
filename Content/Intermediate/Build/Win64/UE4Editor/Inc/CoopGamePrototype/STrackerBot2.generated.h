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
#ifdef COOPGAMEPROTOTYPE_STrackerBot2_generated_h
#error "STrackerBot2.generated.h already included, missing '#pragma once' in STrackerBot2.h"
#endif
#define COOPGAMEPROTOTYPE_STrackerBot2_generated_h

#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelfDestruct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelfDestruct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelfDestruct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelfDestruct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot2(); \
	friend struct Z_Construct_UClass_ASTrackerBot2_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot2, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot2)


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot2(); \
	friend struct Z_Construct_UClass_ASTrackerBot2_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot2, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot2)


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot2(ASTrackerBot2&&); \
	NO_API ASTrackerBot2(const ASTrackerBot2&); \
public:


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot2(ASTrackerBot2&&); \
	NO_API ASTrackerBot2(const ASTrackerBot2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot2)


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASTrackerBot2, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASTrackerBot2, HealthComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASTrackerBot2, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ASTrackerBot2, MovementForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackerBot2, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__RequireDistanceToTarget() { return STRUCT_OFFSET(ASTrackerBot2, RequireDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__ForceStrength() { return STRUCT_OFFSET(ASTrackerBot2, ForceStrength); } \
	FORCEINLINE static uint32 __PPO__StopDistance() { return STRUCT_OFFSET(ASTrackerBot2, StopDistance); } \
	FORCEINLINE static uint32 __PPO__StopVelocity() { return STRUCT_OFFSET(ASTrackerBot2, StopVelocity); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASTrackerBot2, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(ASTrackerBot2, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(ASTrackerBot2, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__SelfDamageInterval() { return STRUCT_OFFSET(ASTrackerBot2, SelfDamageInterval); } \
	FORCEINLINE static uint32 __PPO__SelfDestructSound() { return STRUCT_OFFSET(ASTrackerBot2, SelfDestructSound); } \
	FORCEINLINE static uint32 __PPO__ExplodedSound() { return STRUCT_OFFSET(ASTrackerBot2, ExplodedSound); }


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_14_PROLOG
#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_RPC_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_INCLASS \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_INCLASS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAMEPROTOTYPE_API UClass* StaticClass<class ASTrackerBot2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGamePrototype_Source_CoopGamePrototype_STrackerBot2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
