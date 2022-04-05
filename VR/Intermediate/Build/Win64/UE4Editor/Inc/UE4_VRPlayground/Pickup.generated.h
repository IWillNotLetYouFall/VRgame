// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionControllerComponent;
#ifdef UE4_VRPLAYGROUND_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define UE4_VRPLAYGROUND_Pickup_generated_h

#define VR_Source_UE4_VRPlayground_Pickup_h_15_SPARSE_DATA
#define VR_Source_UE4_VRPlayground_Pickup_h_15_RPC_WRAPPERS \
	virtual void Drop_Implementation(UMotionControllerComponent* MotionController); \
	virtual void Pickup_Implementation(UMotionControllerComponent* MotionController); \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define VR_Source_UE4_VRPlayground_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define VR_Source_UE4_VRPlayground_Pickup_h_15_EVENT_PARMS \
	struct Pickup_eventDrop_Parms \
	{ \
		UMotionControllerComponent* MotionController; \
	}; \
	struct Pickup_eventPickup_Parms \
	{ \
		UMotionControllerComponent* MotionController; \
	};


#define VR_Source_UE4_VRPlayground_Pickup_h_15_CALLBACK_WRAPPERS
#define VR_Source_UE4_VRPlayground_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_VRPlayground"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define VR_Source_UE4_VRPlayground_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_VRPlayground"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define VR_Source_UE4_VRPlayground_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define VR_Source_UE4_VRPlayground_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define VR_Source_UE4_VRPlayground_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(APickup, Root); } \
	FORCEINLINE static uint32 __PPO__Base() { return STRUCT_OFFSET(APickup, Base); } \
	FORCEINLINE static uint32 __PPO__InteractiveCollider() { return STRUCT_OFFSET(APickup, InteractiveCollider); } \
	FORCEINLINE static uint32 __PPO__bUsing() { return STRUCT_OFFSET(APickup, bUsing); } \
	FORCEINLINE static uint32 __PPO__CurrentMotionController() { return STRUCT_OFFSET(APickup, CurrentMotionController); }


#define VR_Source_UE4_VRPlayground_Pickup_h_12_PROLOG \
	VR_Source_UE4_VRPlayground_Pickup_h_15_EVENT_PARMS


#define VR_Source_UE4_VRPlayground_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Source_UE4_VRPlayground_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	VR_Source_UE4_VRPlayground_Pickup_h_15_SPARSE_DATA \
	VR_Source_UE4_VRPlayground_Pickup_h_15_RPC_WRAPPERS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_CALLBACK_WRAPPERS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_INCLASS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Source_UE4_VRPlayground_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Source_UE4_VRPlayground_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	VR_Source_UE4_VRPlayground_Pickup_h_15_SPARSE_DATA \
	VR_Source_UE4_VRPlayground_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_CALLBACK_WRAPPERS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	VR_Source_UE4_VRPlayground_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_VRPLAYGROUND_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VR_Source_UE4_VRPlayground_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
