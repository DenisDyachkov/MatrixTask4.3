#pragma once
#include <iostream>
#include <vector>
#include "Generator.h"

namespace miit 
{
	class Matrix;
	/**
	* @brief Перегрузка оператора вывода
	* @param os Поток вывода
	* @param matrix Матрица для вывода
	* @return Поток вывода с матрицей
	*/
	std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

	class Matrix 
	{
	private:
		std::vector<std::vector<int>> matrix_values;

	public:
		/**
		* @brief Создает объект матрицы		
		* @param gen Генератор для заполнения
		* @param rows Количество строк
		* @param columns Количество столбцов
		*/
		Matrix(Generator* gen, int rows, int columns);

		/**
		* @brief Добавляет в конец матрицы строку
		* @param element Строка, которая будет добавлена
		*/
		void append_row(std::vector<int> element);

		/**
		* @brief Узнает сколько строк в матрице
		* @return Количество строк в матрице
		*/
		size_t get_rows() const;

		/**
		* @brief Узнает сколько столбцов в матрице
		* @return Количество столбцов в матрице
		*/
		size_t get_columns() const;

		/**
		* @brief Узнает минимальное значение в матрице
		* @return Минимальное значение в матрице
		*/
		int get_min_value() const;

		/**
		* @brief Перегрузка оператора сравнения двух матриц
		* @param lhs Первая матрица для сравнения
		* @param rhs Вторая матрица для сравнения
		* @return если равны true, иначе false
		*/
		friend bool operator==(Matrix& lhs, Matrix& rhs) noexcept;

		/**
		* @brief Перегрузка оператора индекса
		* @param index Индекс элемента в матрице
		* @return Элемент под этим индексом
		*/
		const std::vector<int>& operator[](size_t index);

		/**
		* @brief Перегрузка оператора индекса
		* @param index Индекс элемента в матрице
		* @return Элемент под этим индексом
		*/
		const std::vector<int>& operator[](size_t index) const;

		/**
		* @brief Преобразование матрицы в строку
		* @return Строка с матрицей
		*/
		std::string to_string() const noexcept;

	};
}