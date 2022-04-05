// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_VRPlayground/PickupInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupInterface() {}
// Cross Module References
	UE4_VRPLAYGROUND_API UClass* Z_Construct_UClass_UPickupInterface_NoRegister();
	UE4_VRPLAYGROUND_API UClass* Z_Construct_UClass_UPickupInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UE4_VRPlayground();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IPickupInterface::execDrop)
	{
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop_Implementation(Z_Param_MotionController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPickupInterface::execPickup)
	{
		P_GET_OBJECT(UMotionControllerComponent,Z_Param_MotionController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup_Implementation(Z_Param_MotionController);
		P_NATIVE_END;
	}
	void IPickupInterface::Drop(UMotionControllerComponent* MotionController)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void IPickupInterface::Pickup(UMotionControllerComponent* MotionController)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UPickupInterface::StaticRegisterNativesUPickupInterface()
	{
		UClass* Class = UPickupInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &IPickupInterface::execDrop },
			{ "Pickup", &IPickupInterface::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickupInterface_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupInterface_Drop_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupInterface_Drop_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupInterface_eventDrop_Parms, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPickupInterface_Drop_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Drop_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupInterface_Drop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupInterface_Drop_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupInterface_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup Interface" },
		{ "ModuleRelativePath", "PickupInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupInterface_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupInterface, nullptr, "Drop", nullptr, nullptr, sizeof(PickupInterface_eventDrop_Parms), Z_Construct_UFunction_UPickupInterface_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupInterface_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupInterface_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPickupInterface_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPickupInterface_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupInterface_Pickup_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupInterface_Pickup_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupInterface_eventPickup_Parms, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPickupInterface_Pickup_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Pickup_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupInterface_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupInterface_Pickup_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupInterface_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup Interface" },
		{ "ModuleRelativePath", "PickupInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupInterface_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupInterface, nullptr, "Pickup", nullptr, nullptr, sizeof(PickupInterface_eventPickup_Parms), Z_Construct_UFunction_UPickupInterface_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupInterface_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupInterface_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupInterface_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPickupInterface_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPickupInterface_NoRegister()
	{
		return UPickupInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPickupInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_VRPlayground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupInterface_Drop, "Drop" }, // 2212371116
		{ &Z_Construct_UFunction_UPickupInterface_Pickup, "Pickup" }, // 2569301415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickupInterface_Statics::ClassParams = {
		&UPickupInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickupInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickupInterface, 2119363371);
	template<> UE4_VRPLAYGROUND_API UClass* StaticClass<UPickupInterface>()
	{
		return UPickupInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupInterface(Z_Construct_UClass_UPickupInterface, &UPickupInterface::StaticClass, TEXT("/Script/UE4_VRPlayground"), TEXT("UPickupInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupInterface);
	static FName NAME_UPickupInterface_Drop = FName(TEXT("Drop"));
	void IPickupInterface::Execute_Drop(UObject* O, UMotionControllerComponent* MotionController)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupInterface::StaticClass()));
		PickupInterface_eventDrop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickupInterface_Drop);
		if (Func)
		{
			Parms.MotionController=MotionController;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPickupInterface*)(O->GetNativeInterfaceAddress(UPickupInterface::StaticClass())))
		{
			I->Drop_Implementation(MotionController);
		}
	}
	static FName NAME_UPickupInterface_Pickup = FName(TEXT("Pickup"));
	void IPickupInterface::Execute_Pickup(UObject* O, UMotionControllerComponent* MotionController)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupInterface::StaticClass()));
		PickupInterface_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickupInterface_Pickup);
		if (Func)
		{
			Parms.MotionController=MotionController;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPickupInterface*)(O->GetNativeInterfaceAddress(UPickupInterface::StaticClass())))
		{
			I->Pickup_Implementation(MotionController);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
