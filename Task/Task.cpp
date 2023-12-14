#include "Task.h"

miit::Task::Task(Matrix matrix)
	:matrix(matrix)
{
}

miit::Matrix miit::Task::task_1()
{
	Matrix answer;
	for (size_t i = 0; i < matrix.get_rows(); i++)
	{
		std::vector<int> row{};
		for (size_t j = 0; j < matrix.get_columns(); j++)
		{
			if (j % 2 == 0) 
			{
				row.push_back(0);
			}
			else 
			{
				row.push_back(matrix[i][j]);
			}
		}
		answer.append_row(row);
	}
	return answer;
}

miit::Matrix miit::Task::task_2()
{
	Matrix answer;
	int min = this->matrix.get_min_value();
	std::vector<int> row;
	for (size_t i = 0; i < matrix.get_rows(); i++)
	{
		row.push_back(i + 1);
	}
	for (size_t i = 0; i < matrix.get_rows(); i++)
	{
		answer.append_row(this->matrix[i]);
		if (this->matrix.is_value_in_row(i, min)) 
		{
			answer.append_row(row);
		}
	}
	return answer;
}
