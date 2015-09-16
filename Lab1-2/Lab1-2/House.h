//������� ����� House : id, ����� ��������, �������, ����, ���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������), 
//������� �������� �������(������������� � ���.�������).


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