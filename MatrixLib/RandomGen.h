#pragma once
#include <random>
#include "Generator.h"

/**
* @brief ����� ���������� ��������� �����
*/
class RandomGen : public Generator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;

public:
	/**
	* @brief �������� ������� ���� RandomGen
	* @param left ����� ������� ���������
	* @param right ������ ������� ���������
	*/
	RandomGen(int left, int right);

	/**
	* @brief ������� ��������� ����� �� ���������� 
	* @return ��������� ����� �� ����������
	*/
	int generate() override;
};