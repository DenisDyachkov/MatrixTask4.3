#pragma once
#include "TaskBase.h"
#include "../MatrixLib/Header.h"

namespace miit
{
	/**
	* @brief Класс задание
	*/
	class Task : public BaseTask
	{
	private:
		Matrix matrix;

	public:
		/**
		* @brief Инициализация объекта Task
		* @param matrix Матрица с которой надо выполнить задания
		*/
		Task(Matrix matrix);

		/**
		* @brief Решение первого задания
		* @return Матрица выполенного задания
		*/
		Matrix task_1() override;

		/**
		* @brief Решение второго задания
		* @return Матрица выполенного задания
		*/
		Matrix task_2() override;
	};
}