// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAMEPROTOTYPE_SPickUpActor_generated_h
#error "SPickUpActor.generated.h already included, missing '#pragma once' in SPickUpActor.h"
#endif
#define COOPGAMEPROTOTYPE_SPickUpActor_generated_h

#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_RPC_WRAPPERS
#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPickUpActor(); \
	friend struct Z_Construct_UClass_ASPickUpActor_Statics; \
public: \
	DECLARE_CLASS(ASPickUpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASPickUpActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASPickUpActor(); \
	friend struct Z_Construct_UClass_ASPickUpActor_Statics; \
public: \
	DECLARE_CLASS(ASPickUpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoopGamePrototype"), NO_API) \
	DECLARE_SERIALIZER(ASPickUpActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPickUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPickUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickUpActor(ASPickUpActor&&); \
	NO_API ASPickUpActor(const ASPickUpActor&); \
public:


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickUpActor(ASPickUpActor&&); \
	NO_API ASPickUpActor(const ASPickUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPickUpActor)


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASPickUpActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(ASPickUpActor, DecalComp); } \
	FORCEINLINE static uint32 __PPO__PowerUpClass() { return STRUCT_OFFSET(ASPickUpActor, PowerUpClass); } \
	FORCEINLINE static uint32 __PPO__CooldownDuration() { return STRUCT_OFFSET(ASPickUpActor, CooldownDuration); }


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_13_PROLOG
#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_RPC_WRAPPERS \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_INCLASS \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_INCLASS_NO_PURE_DECLS \
	CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAMEPROTOTYPE_API UClass* StaticClass<class ASPickUpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGamePrototype_Source_CoopGamePrototype_SPickUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
