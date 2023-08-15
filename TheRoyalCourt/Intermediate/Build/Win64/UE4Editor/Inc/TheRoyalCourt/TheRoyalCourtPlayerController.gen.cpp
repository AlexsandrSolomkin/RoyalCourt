// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TheRoyalCourtPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheRoyalCourtPlayerController() {}
// Cross Module References
	THEROYALCOURT_API UClass* Z_Construct_UClass_ATheRoyalCourtPlayerController_NoRegister();
	THEROYALCOURT_API UClass* Z_Construct_UClass_ATheRoyalCourtPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TheRoyalCourt();
// End Cross Module References
	void ATheRoyalCourtPlayerController::StaticRegisterNativesATheRoyalCourtPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATheRoyalCourtPlayerController_NoRegister()
	{
		return ATheRoyalCourtPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATheRoyalCourtPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_TheRoyalCourt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TheRoyalCourtPlayerController.h" },
				{ "ModuleRelativePath", "TheRoyalCourtPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATheRoyalCourtPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATheRoyalCourtPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheRoyalCourtPlayerController, 3586558050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheRoyalCourtPlayerController(Z_Construct_UClass_ATheRoyalCourtPlayerController, &ATheRoyalCourtPlayerController::StaticClass, TEXT("/Script/TheRoyalCourt"), TEXT("ATheRoyalCourtPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheRoyalCourtPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
