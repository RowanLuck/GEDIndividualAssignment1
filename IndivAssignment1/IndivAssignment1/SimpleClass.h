#pragma once

#include "PluginSettings.h"
#include <iostream>
#include <fstream>
using namespace std;

class PLUGIN_API SimpleClass
{
public:
	int SimpleFunction();

	float x, z;
	fstream textFile;

	void savePosition(float x, float z);
	void loadPosition(float x, float z);

};