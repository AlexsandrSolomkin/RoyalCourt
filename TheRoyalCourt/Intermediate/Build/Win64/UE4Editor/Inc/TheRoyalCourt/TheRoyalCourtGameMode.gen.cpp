// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TheRoyalCourtGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheRoyalCourtGameMode() {}
// Cross Module References
	THEROYALCOURT_API UClass* Z_Construct_UClass_ATheRoyalCourtGameMode_NoRegister();
	THEROYALCOURT_API UClass* Z_Construct_UClass_ATheRoyalCourtGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheRoyalCourt();
// End Cross Module References
	void ATheRoyalCourtGameMode::StaticRegisterNativesATheRoyalCourtGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATheRoyalCourtGameMode_NoRegister()
	{
		return ATheRoyalCourtGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATheRoyalCourtGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TheRoyalCourt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TheRoyalCourtGameMode.h" },
				{ "ModuleRelativePath", "TheRoyalCourtGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATheRoyalCourtGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATheRoyalCourtGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheRoyalCourtGameMode, 850233421);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheRoyalCourtGameMode(Z_Construct_UClass_ATheRoyalCourtGameMode, &ATheRoyalCourtGameMode::StaticClass, TEXT("/Script/TheRoyalCourt"), TEXT("ATheRoyalCourtGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheRoyalCourtGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
