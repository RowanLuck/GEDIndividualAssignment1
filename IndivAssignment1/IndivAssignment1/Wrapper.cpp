#include "Wrapper.h"

SimpleClass simpleClass;

int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}

void savePosition(float x, float z)
{
	return simpleClass.savePosition(x, z);
}

void loadPosition(float x, float z)
{
	return simpleClass.loadPosition(x, z);
}