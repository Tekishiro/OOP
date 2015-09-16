//Создать класс House : id, Номер квартиры, Площадь, Этаж, Количество комнат, Улица, Тип здания, Срок эксплуатации.
//Функции - члены реализуют запись и считывание полей(проверка корректности), 
//расчета возраста задания(необходимость в кап.ремонте).


#pragma once
#include "stdafx.h"
#include "string.h"

class House
{
	int id;
	int number;
	int square;
	int floor;
	int rooms;
	char street[15];
	char type[15];
	int time;
public:
	House();
	House(int, int, int, int, int, char[15], char[15], int);

	void setInf();

	void print();
	void printRooms();
	void printRandF();
	void printSquare();

	~House(void);
};