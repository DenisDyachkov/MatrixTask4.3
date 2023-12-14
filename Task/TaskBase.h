#pragma once
#include "../MatrixLib/Header.h"

namespace miit
{
	/**
	* @brief ������� ����� �������
	*/
	class BaseTask
	{
	public:

		/**
		* @brief ����� ����������� ����������
		*/
		virtual ~BaseTask() = 0 {};

		/**
		* @brief ����� ����������� ����� ��� ������� �������
		*/
		virtual Matrix task_1() = 0;

		/**
		* @brief ����� ����������� ����� ��� ������� �������
		*/
		virtual Matrix task_2() = 0;
	};

}