// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReaderFile.generated.h"

UCLASS()
class UE4_VRPLAYGROUND_API UReaderFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:

	UFUNCTION(BlueprintPure, Category = "ReaderFile", meta = (Keywords = "Load Text File"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);
};