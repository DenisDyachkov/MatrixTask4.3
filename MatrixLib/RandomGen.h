#pragma once
#include <random>
#include "Generator.h"

/**
* @brief Класс генератора случайных чисел
*/
class RandomGen : public Generator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;

public:
	/**
	* @brief Создание объекта типа RandomGen
	* @param left Левая граница диапазона
	* @param right Правая граница диапазона
	*/
	RandomGen(int left, int right);

	/**
	* @brief Создает случайное число из промежутка 
	* @return Случайное число из промежутка
	*/
	int generate() override;
};