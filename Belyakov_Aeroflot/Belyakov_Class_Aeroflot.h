#pragma once
/**
	@file	Belyakov_Class_Aeroflot.h
	@brief	������������ ���� ������ �����
	@copyright	����
	@author		������� �.�.
	@date		22 - 05 - 2024
	@version	1.0.0
\par ���������� ������ :
	@ref	Belyakov_Class_Aeroflot.cpp
\par �������� ����� :
	@ref	Belyakov_Class_Aeroflot
*/

/// ����� �������� �����
/** �������� ������ ����� � ������ ��� ������ � ����
*/

class Belyakov_Class_Aeroflot
{
protected:
	char* destination; ///< ����� ����������
	int number; ///< ����� �����
	char*; ///< ��� �������
	char*; ///< ����� ������
	char* day; ///< ���� ������

public:
	/// ����������� �� ���������
	/** ������� ���� ��� ������������� �����
	*/
	Belyakov_Class_Aeroflot(void);

	/// ����������� � ����������� ����� ������
	/** ������� ���� � �������������� �� ����
	\param destination ����� ����������
	\param number ����� �����
	\param type ��� �������
	\param time ����� ������
	\param day ���� ������
	*/
	Belyakov_Class_Aeroflot(char* destination, int number, char* type, char* time, const char* day);

	/// ���������� ����������� �������
	~Belyakov_Class_Aeroflot(void);

	/// �����, ������������ ������ ������ ��� ��������� ������ ����������
	/** ��������� ������ ������ �� �������� ����� ����������
	\param dest ���������� ����� ����������
	*/
	void Belyakov_showFlightsByDestination(char* dest);

	/// �����, ������������ ������ ������ ��� ��������� ���
	/** ��������� ������ ������ �� �������� ���� ������
	\param d ���������� ���� ������
	*/
	void Belyakov_showFlightsByDay(char* d);

	/// �����, ������������ ������ ������ ��� ��������� ��� ������ � ������� ������
	/** ��������� ������ ������ �� ��������� ���� ������ � ����� ������
	\param d ���������� ���� ������
	\param t ���������� ����� ������
	*/
	void Belyakov_showFlightsByDayAndTime(char* d, char* t);
};


