#include "Header.h"
#include <sstream>

miit::Matrix::Matrix(Generator* gen, size_t rows, size_t columns)
	:info(std::vector<std::vector<int>> {})
{
	for (size_t i = 0; i < rows; i++)
	{
		std::vector<int> row{};
		for (size_t j = 0; j < columns; j++)
		{
			row.push_back(gen->generate());
		}
		this->info.push_back(row);
	}
}

miit::Matrix::Matrix(std::initializer_list<int> info, size_t rows, size_t columns)
	:info(std::vector<std::vector<int>> {rows})
{
	size_t i = 0;
	size_t j = 0;
	for (int item : info)
	{
		this->info[j].push_back(item);
		i++;
		if (i % columns == 0)
		{
			j++;
		}
	}
}

miit::Matrix::Matrix()
	:info(std::vector<std::vector<int>> {}) 
{
}

void miit::Matrix::append_row(std::vector<int> element)
{
	this->info.push_back(element);
}

size_t miit::Matrix::get_rows() const
{
	return info.size();
}


size_t miit::Matrix::get_columns() const
{
	if (this->info.size() == 0)
	{
		return 0;
	}
	return this->info[0].size();
}

int miit::Matrix::get_min_value() const
{
	int min = std::numeric_limits<int>::max();
	for (size_t i = 0; i < this->get_rows(); i++)
	{
		for (size_t j = 0; j < this->get_columns(); j++)
		{
			if (this->info[i][j] <= min) 
			{
				min = info[i][j];
			}
		}
	}
	return min;
}

bool miit::Matrix::is_value_in_row(size_t index, int element)
{
	
	for (size_t i = 0; i < this->info[index].size(); i++)
	{
		if (this->info[index][i] == element)
		{
			return true;
		}
	}
	return false;
}

const std::vector<int>& miit::Matrix::operator[](size_t index) const
{
	return info[index];
}

const std::vector<int>& miit::Matrix::operator[](size_t index)
{
	return info[index];
}

std::string miit::Matrix::to_string() const noexcept
{
	std::stringstream buffer;
	for (size_t i = 0; i < this->get_rows(); i++)
	{
		for (size_t j = 0; j < this->get_columns(); j++)
		{
			buffer << this->info[i][j] << " ";
		}
		buffer << "\n";
	}
	return buffer.str();
	
}

std::ostream& miit::operator<<(std::ostream& os, Matrix& matrix) noexcept
{
	return os << matrix.to_string();
}

bool miit::operator==(Matrix& lhs, Matrix& rhs) noexcept
{
	return (lhs.to_string() == rhs.to_string());
}
