#include "SimpleClass.h"

int SimpleClass::SimpleFunction()
{
	return 1;
}

void SimpleClass::savePosition(float x, float z)
{
	textFile.open("Save_File.txt");
	textFile << "X: " << x << ", Z: " << z;
	textFile.close();
}

void SimpleClass::loadPosition(float x, float z)
{

}