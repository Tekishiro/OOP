//������� ����� House : id, ����� ��������, �������, ����, ���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������), 
//������� �������� �������(������������� � ���.�������).

#include "stdafx.h"
#include "House.h"
#include <iostream>
using namespace std;

House::House()
{
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
{}

