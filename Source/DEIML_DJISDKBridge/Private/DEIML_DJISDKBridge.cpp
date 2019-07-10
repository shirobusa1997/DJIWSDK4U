// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DEIML_DJISDKBridge.h"

#define LOCTEXT_NAMESPACE "FDEIML_DJISDKBridgeModule"

void FDEIML_DJISDKBridgeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDEIML_DJISDKBridgeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDEIML_DJISDKBridgeModule, DEIML_DJISDKBridge)