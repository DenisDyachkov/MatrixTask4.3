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
		* @brief Создает объект матрицы		
		* @param gen Генератор для заполнения
		* @param rows Количество строк
		* @param columns Количество столбцов
		*/
		Matrix(Generator* gen, size_t rows, size_t columns);

		/**
		* @brief Создает объект матрицы
		* @param info Информация о данных
		* @param rows Количество строк
		* @param columns Количество столбцов
		*/
		Matrix(std::initializer_list<int> info, size_t rows, size_t columns);

		/**
		* @brief Создает пустой объект матрицы
		*/
		Matrix();

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
		* @brief Узнает есть ли элемент в строке
		* @param index Индекс строки
		* @param element Элемент доя поиска
		* @return если есть true, иначе false
		*/
		bool is_value_in_row(size_t index, int element);

		/**
		* @brief Перегрузка оператора вывода
		* @param os Поток вывода
		* @param matrix Матрица для вывода
		* @return Поток вывода с матрицей
		*/
		friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

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