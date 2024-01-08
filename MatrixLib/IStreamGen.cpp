#include "IStreamGen.h"

IStreamGen::IStreamGen(std::istream& in)
	:in{in}
{
}

int IStreamGen::generate()
{
	int value = 0;
	this->in >> value;
	return value;
}
