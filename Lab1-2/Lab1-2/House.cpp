//������� ����� House : id, ����� ��������, �������, ����, ���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������), 
//������� �������� �������(������������� � ���.�������).

#include "stdafx.h"
#include "House.h"
#include <iostream>
using namespace std;

House::House()
{
	cout << "Created!" << endl;
}

void House::setInf()
{
	cout << "������� ID ����:" << endl;
	cin >> id;
	cout << "����� ����:" << endl;
	cin >> number;
	cout << "�������:" << endl;
	cin >> square;
	cout << "����:" << endl;
	cin >> floor;
	cout << "���������� ������:" << endl;
	cin >> rooms;
	cout << "�����:" << endl;
	cin >> street;
	cout << "��� ����:" << endl;
	cin >> type;
	cout << "����� ������������:" << endl;
	cin >> time;
	cout << "-------------------------------------" << endl;
}

void House::print()
{
	cout << endl;
	cout << "Id ����: " << House::id << endl;
	cout << "����� ����: " << House::number << endl;
	cout << "������� ����: " << House::square << endl;
	cout << "����: " << House::floor << endl;
	cout << "���������� ������: " << House::rooms << endl;
	cout << "�����: " << House::street << endl;
	cout << "��� ����: " << House::type << endl;
	cout << "����� ������������: " << House::time << endl;
	cout << endl;
}

House::~House(void)
{
	cout << "Destructed!" << endl;
}

void House::printRooms(int n)
{
	if (rooms = n) print();
}

void House::printRandF(int n, int a, int b)
{
	if (rooms = n && floor >= a && floor <= b) print();
}

void House::printSquare(int s)
{
	if (square > s) print();
}