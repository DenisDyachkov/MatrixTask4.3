#pragma once

/**
* @brief ������� ����� ���� ���������
*/
class Generator
{
public:
	/**
	* @brief ����� ����������� ���������� ��� �������� ������ �� ������������
	*/
	virtual ~Generator() = 0 {};

	/**
	* @brief ����� ����������� ��������� ����� � �����������
	*/
	virtual int generate() = 0;
};