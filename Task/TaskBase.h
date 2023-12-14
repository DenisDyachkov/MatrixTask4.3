#pragma once
#include "../MatrixLib/Header.h"

namespace miit
{
	/**
	* @brief Базовый класс задания
	*/
	class BaseTask
	{
	public:

		/**
		* @brief Чисто виртуальный деструктор
		*/
		virtual ~BaseTask() = 0 {};

		/**
		* @brief Чисто виртуальный метод для первого задания
		*/
		virtual Matrix task_1() = 0;

		/**
		* @brief Чисто виртуальный метод для второго задания
		*/
		virtual Matrix task_2() = 0;
	};

}