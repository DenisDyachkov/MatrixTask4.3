#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrixLib/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(MatrixAppendRow_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Matrix matrix_1 = Matrix({ 1,2,3,4,5,6 }, 3, 2);
			std::vector<int> row{ 5, 6 };
			matrix.append_row(row);
			Assert::IsTrue(matrix_1 == matrix);
		}

		TEST_METHOD(MatrixToString_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix.to_string() == "1 2 \n3 4 \n");
		}

		TEST_METHOD(MatrixEqualOperator_ValidData_Success)
		{
			Matrix matrix_1 = Matrix({ 1,2,3,4 }, 2, 2);
			Matrix matrix_2 = Matrix({ 1,2,3,4,5,6 }, 3, 2);
			Matrix matrix_3 = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix_1 == matrix_3 && !(matrix_1 == matrix_2));
		}

		TEST_METHOD(MatrixIndexOperator_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			int element = 4;
			Assert::IsTrue(matrix[1][1] == element);
		}

		TEST_METHOD(MatrixGetRows_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix.get_rows() == 2);
		}

		TEST_METHOD(MatrixRows_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix.get_columns() == 2);
		}

		TEST_METHOD(MatrixGetMinValue_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix.get_min_value() == 1);
		}

		TEST_METHOD(MatrixIsValueInRow_ValidData_Success)
		{
			Matrix matrix = Matrix({ 1,2,3,4 }, 2, 2);
			Assert::IsTrue(matrix.is_value_in_row(1, 3) == true);
		}

	};
}
