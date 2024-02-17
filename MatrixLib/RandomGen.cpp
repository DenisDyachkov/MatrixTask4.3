#include "RandomGen.h"

RandomGen::RandomGen(int left, int right)
{
	this->generator = std::mt19937(std::random_device{}());
	this->distribution = std::uniform_int_distribution<int>(left, right);
}

int RandomGen::generate()
{
	return this->distribution(this->generator);
}
