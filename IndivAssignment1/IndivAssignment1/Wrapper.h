#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"

#ifdef __cplusplus
extern "C"

{
#endif

	// Put your functions here
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void savePosition(float x, float z);
	PLUGIN_API void loadPosition(float x, float z);

#ifdef __cplusplus
}
#endif