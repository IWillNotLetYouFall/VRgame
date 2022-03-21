// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionControllerComponent;
#ifdef UE4_VRPLAYGROUND_PickupInterface_generated_h
#error "PickupInterface.generated.h already included, missing '#pragma once' in PickupInterface.h"
#endif
#define UE4_VRPLAYGROUND_PickupInterface_generated_h

#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_SPARSE_DATA
#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_RPC_WRAPPERS \
	virtual void Drop_Implementation(UMotionControllerComponent* MotionController) {}; \
	virtual void Pickup_Implementation(UMotionControllerComponent* MotionController) {}; \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation(UMotionControllerComponent* MotionController) {}; \
	virtual void Pickup_Implementation(UMotionControllerComponent* MotionController) {}; \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_EVENT_PARMS \
	struct PickupInterface_eventDrop_Parms \
	{ \
		UMotionControllerComponent* MotionController; \
	}; \
	struct PickupInterface_eventPickup_Parms \
	{ \
		UMotionControllerComponent* MotionController; \
	};


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_CALLBACK_WRAPPERS
#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE4_VRPLAYGROUND_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE4_VRPLAYGROUND_API, UPickupInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE4_VRPLAYGROUND_API UPickupInterface(UPickupInterface&&); \
	UE4_VRPLAYGROUND_API UPickupInterface(const UPickupInterface&); \
public:


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE4_VRPLAYGROUND_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE4_VRPLAYGROUND_API UPickupInterface(UPickupInterface&&); \
	UE4_VRPLAYGROUND_API UPickupInterface(const UPickupInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE4_VRPLAYGROUND_API, UPickupInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface)


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupInterface(); \
	friend struct Z_Construct_UClass_UPickupInterface_Statics; \
public: \
	DECLARE_CLASS(UPickupInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UE4_VRPlayground"), UE4_VRPLAYGROUND_API) \
	DECLARE_SERIALIZER(UPickupInterface)


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	static void Execute_Drop(UObject* O, UMotionControllerComponent* MotionController); \
	static void Execute_Pickup(UObject* O, UMotionControllerComponent* MotionController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define VR_Source_UE4_VRPlayground_PickupInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	static void Execute_Drop(UObject* O, UMotionControllerComponent* MotionController); \
	static void Execute_Pickup(UObject* O, UMotionControllerComponent* MotionController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define VR_Source_UE4_VRPlayground_PickupInterface_h_10_PROLOG \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_EVENT_PARMS


#define VR_Source_UE4_VRPlayground_PickupInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_SPARSE_DATA \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_RPC_WRAPPERS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_CALLBACK_WRAPPERS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VR_Source_UE4_VRPlayground_PickupInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_SPARSE_DATA \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_CALLBACK_WRAPPERS \
	VR_Source_UE4_VRPlayground_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_VRPLAYGROUND_API UClass* StaticClass<class UPickupInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VR_Source_UE4_VRPlayground_PickupInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
