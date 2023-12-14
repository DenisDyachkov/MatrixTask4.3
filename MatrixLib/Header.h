#pragma once
#include <iostream>
#include <vector>
#include "Generator.h"

namespace miit 
{
	class Matrix 
	{
	private:
		std::vector<std::vector<int>> info;

	public:
		/**
		* @brief ������� ������ �������		
		* @param gen ��������� ��� ����������
		* @param rows ���������� �����
		* @param columns ���������� ��������
		*/
		Matrix(Generator* gen, size_t rows, size_t columns);

		/**
		* @brief ������� ������ �������
		* @param info ���������� � ������
		* @param rows ���������� �����
		* @param columns ���������� ��������
		*/
		Matrix(std::initializer_list<int> info, size_t rows, size_t columns);

		/**
		* @brief ������� ������ ������ �������
		*/
		Matrix();

		/**
		* @brief ��������� � ����� ������� ������
		* @param element ������, ������� ����� ���������
		*/
		void append_row(std::vector<int> element);

		/**
		* @brief ������ ������� ����� � �������
		* @return ���������� ����� � �������
		*/
		size_t get_rows() const;

		/**
		* @brief ������ ������� �������� � �������
		* @return ���������� �������� � �������
		*/
		size_t get_columns() const;

		/**
		* @brief ������ ����������� �������� � �������
		* @return ����������� �������� � �������
		*/
		int get_min_value() const;

		/**
		* @brief ������ ���� �� ������� � ������
		* @param index ������ ������
		* @param element ������� ��� ������
		* @return ���� ���� true, ����� false
		*/
		bool is_value_in_row(size_t index, int element);

		/**
		* @brief ���������� ��������� ������
		* @param os ����� ������
		* @param matrix ������� ��� ������
		* @return ����� ������ � ��������
		*/
		friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

		/**
		* @brief ���������� ��������� ��������� ���� ������
		* @param lhs ������ ������� ��� ���������
		* @param rhs ������ ������� ��� ���������
		* @return ���� ����� true, ����� false
		*/
		friend bool operator==(Matrix& lhs, Matrix& rhs) noexcept;

		/**
		* @brief ���������� ��������� �������
		* @param index ������ �������� � �������
		* @return ������� ��� ���� ��������
		*/
		const std::vector<int>& operator[](size_t index);

		/**
		* @brief ���������� ��������� �������
		* @param index ������ �������� � �������
		* @return ������� ��� ���� ��������
		*/
		const std::vector<int>& operator[](size_t index) const;

		/**
		* @brief �������������� ������� � ������
		* @return ������ � ��������
		*/
		std::string to_string() const noexcept;

	};
}