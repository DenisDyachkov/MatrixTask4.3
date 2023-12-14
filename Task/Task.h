#pragma once
#include "TaskBase.h"
#include "../MatrixLib/Header.h"

namespace miit
{
	/**
	* @brief ����� �������
	*/
	class Task : public BaseTask
	{
	private:
		Matrix matrix;

	public:
		/**
		* @brief ������������� ������� Task
		* @param matrix ������� � ������� ���� ��������� �������
		*/
		Task(Matrix matrix);

		/**
		* @brief ������� ������� �������
		* @return ������� ����������� �������
		*/
		Matrix task_1() override;

		/**
		* @brief ������� ������� �������
		* @return ������� ����������� �������
		*/
		Matrix task_2() override;
	};
}