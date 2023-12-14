#pragma once

/**
* @brief Базовый класс типа генератор
*/
class Generator
{
public:
	/**
	* @brief Чисто виртуальный деструктор для удаления памяти за наследниками
	*/
	virtual ~Generator() = 0 {};

	/**
	* @brief Чисто виртуальный генератор чисел у наследников
	*/
	virtual int generate() = 0;
};