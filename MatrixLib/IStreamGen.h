#pragma once
#include "Generator.h"
#include <iostream>

/**
* @brief Класс генератор для ввода чисел с клавиатуры
*/
class IStreamGen : public Generator
{
private:
	std::istream& in;

public:
	/**
	* @brief Инициализация объекта типа IStreamGenerator
	* @param input Поток ввода
	*/
	IStreamGen(std::istream& = std::cin);

	/**
	* @brief Запрашивает у пользователся число
	* @return Элемент от пользователя
	*/
	int generate() override;
};