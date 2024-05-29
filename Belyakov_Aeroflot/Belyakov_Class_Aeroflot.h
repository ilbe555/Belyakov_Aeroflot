#pragma once
/**
	@file	Belyakov_Class_Aeroflot.h
	@brief	Заголовочный файл класса Рейсы
	@copyright	ВоГУ
	@author		Беляков И.А.
	@date		22 - 05 - 2024
	@version	1.0.0
\par Использует классы :
	@ref	Belyakov_Class_Aeroflot.cpp
\par Содержит класс :
	@ref	Belyakov_Class_Aeroflot
*/

/// Класс описания рейса
/** Содержит данные рейса и методы для работы с ними
*/

class Belyakov_Class_Aeroflot
{
protected:
	char* destination; ///< пункт назначения
	int number; ///< номер рейса
	char*; ///< тип самолёта
	char*; ///< время вылета
	char* day; ///< день недели

public:
	/// Конструктор по умолчанию
	/** Создает рейс без инициализации полей
	*/
	Belyakov_Class_Aeroflot(void);

	/// Конструктор с заполнением полей класса
	/** Создает рейс и инициализирует ее поля
	\param destination пункт назначения
	\param number номер рейса
	\param type тип самолёта
	\param time время вылета
	\param day день недели
	*/
	Belyakov_Class_Aeroflot(char* destination, int number, char* type, char* time, const char* day);

	/// Деструктор освобождает ресурсы
	~Belyakov_Class_Aeroflot(void);

	/// Метод, показывающий список рейсов для заданного пункта назначения
	/** Фильтрует список рейсов по свойству Пункт назначения
	\param dest задаваемый пункт назначения
	*/
	void Belyakov_showFlightsByDestination(char* dest);

	/// Метод, показывающий список рейсов для заданного дня
	/** Фильтрует список рейсов по свойству День недели
	\param d задаваемый день недели
	*/
	void Belyakov_showFlightsByDay(char* d);

	/// Метод, показывающий список рейсов для заданного дня недели и времени вылета
	/** Фильтрует список рейсов по свойствам День недели и Время вылета
	\param d задаваемый день недели
	\param t задаваемое время вылета
	*/
	void Belyakov_showFlightsByDayAndTime(char* d, char* t);
};


