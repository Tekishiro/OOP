//������� ����� House : id, ����� ��������, �������, ����, ���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������),
//������� �������� �������(������������� � ���.�������).������� ������ ��������.
//������� : a) ������ �������, ������� �������� ����� ������; 
//b) ������ �������, ������� �������� ����� ������ � ������������� �� �����, ������� ��������� � �������� ����������; 
//c) ������ �������, ������� �������, ������������� ��������.
#pragma once
#include "string.h"
#include <iostream>
class Student
{
	char name[30];
	int age;
public:
	Student();
	Student(char *, int);
	void setAge(int);
	int getAge(void);
	void setName(char*);
	char* getName(void);
	void print();
	~Student(void);
};

class House
{
	unsigned int id;
	unsigned int number;
	unsigned int square;
	unsigned int floor;
	unsigned int rooms;
	char* street;
	char* type;
	unsigned int time;

public:
	House();
	House(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*, char*, unsigned int);
	void setId(unsigned int);
	void setNumber(unsigned int);
	void setSquare(unsigned int);
	void setFloor(unsigned int);
	void setRooms(unsigned int);
	void setStreet(char*);
	void setType(char*);
	void setTime(unsigned int);
	int getId(void);
	int getNumber(void);
	int getSquare(void);
	int getFloor(void);
	int getRoom(void);
	char* getStreet(void);
	char* getType(void);
	int getTime(void);

	void print();

	~House(void);
};