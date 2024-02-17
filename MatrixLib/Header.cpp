#include "Header.h"
#include <sstream>

miit::Matrix::Matrix(Generator* gen, int rows, int columns)
	:matrix_values(std::vector<std::vector<int>> {})
{
	if (rows < 0 || columns < 0 || gen == nullptr) 
	{
		throw std::out_of_range("Incorrect matrix params");
	}

	rows = static_cast<size_t>(rows);
	columns = static_cast<size_t>(columns);

	for (size_t i = 0; i < rows; i++)
	{
		std::vector<int> row{};
		for (size_t j = 0; j < columns; j++)
		{
			row.push_back(gen->generate());
		}
		this->matrix_values.push_back(row);
	}
}

void miit::Matrix::append_row(std::vector<int> element)
{
	this->matrix_values.push_back(element);
}

size_t miit::Matrix::get_rows() const
{
	return matrix_values.size();
}


size_t miit::Matrix::get_columns() const
{
	if (this->matrix_values.size() == 0)
	{
		return 0;
	}
	return this->matrix_values[0].size();
}

int miit::Matrix::get_min_value() const
{
	int min = std::numeric_limits<int>::max();
	for (size_t i = 0; i < this->get_rows(); i++)
	{
		for (size_t j = 0; j < this->get_columns(); j++)
		{
			if (this->matrix_values[i][j] <= min) 
			{
				min = matrix_values[i][j];
			}
		}
	}
	return min;
}

const std::vector<int>& miit::Matrix::operator[](size_t index) const
{
	return matrix_values[index];
}

const std::vector<int>& miit::Matrix::operator[](size_t index)
{
	return matrix_values[index];
}

std::string miit::Matrix::to_string() const noexcept
{
	std::stringstream buffer;
	for (size_t i = 0; i < this->get_rows(); i++)
	{
		for (size_t j = 0; j < this->get_columns(); j++)
		{
			buffer << this->matrix_values[i][j] << " ";
		}
		buffer << "\n";
	}
	return buffer.str();
}

std::ostream& miit::operator<<(std::ostream& os, miit::Matrix& matrix) noexcept
{
	return os << matrix.to_string();
}

bool miit::operator==(Matrix& lhs, Matrix& rhs) noexcept
{
	return (lhs.to_string() == rhs.to_string());
}
