#include <iostream>
#include "../MatrixLib/Header.h"
#include "../MatrixLib/RandomGen.h"
#include "../Task/Task.h"
using namespace miit;

int main() 
{
	RandomGen* gen = new RandomGen(2, 22);
	Matrix matrix323213 = Matrix(gen, 2, 2);
	Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
	Matrix matrix_1 = Matrix({ 1,2,3,4,5,6 }, 3, 2);
	std::vector<int> row{ 5, 6 };
	std::cout << (matrix == matrix_1);
	return 0;
}
