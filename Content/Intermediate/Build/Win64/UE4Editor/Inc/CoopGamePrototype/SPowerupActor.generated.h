// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAMEPROTOTYPE_SPowerupActor_generated_h
#error "SPowerupActor.generated.h already included, missing '#pragma once' in SPowerupActor.h"
#endif
#define COOPGAMEPROTOTYPE_SPowerupActor_generated_h

#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_EVENT_PARMS
#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_CALLBACK_WRAPPERS
#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend struct Z_Construct_UClass_ASPowerupActor_Statics; \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public:


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerUpInterval() { return STRUCT_OFFSET(ASPowerupActor, PowerUpInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNrOfTicks() { return STRUCT_OFFSET(ASPowerupActor, TotalNrOfTicks); }


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_9_PROLOG \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_EVENT_PARMS


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_RPC_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_INCLASS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAMEPROTOTYPE_API UClass* StaticClass<class ASPowerupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGamePrototype_Source_CoopGamePrototype_SPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
