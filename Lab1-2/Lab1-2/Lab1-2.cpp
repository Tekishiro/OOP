// Lab1-2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "House.h"
#include <iostream>
using namespace std;


int main()
{
	system("chcp 1251");
	House x[20];
	int n, d, r=0, f1 = 0, f2 = 0, s=0;
	cout << "������� ���������� �����: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl << "������� ��� #" << i+1 << endl;
		x[i].setInf();
	}
	system("cls");

	do
	{
		cout << endl << endl << "*****�������� �����: *****" << endl;
		cout << "1 - ������� ������ ����� �� �����." << endl;
		cout << "2 - ������� ����, ������� �������� ����� ������." << endl;
		cout << "3 - ������� ����, ������� �������� ����� ������ � ������������� ����� ��������� �������." << endl;
		cout << "4 - ������� ����, ��� ������� ������ ��������." << endl;
		cout << "0 - ��x�� �� ���������." << endl;
		cin >> d;
		system("cls");
		switch (d)
		{
		case 1:
			for (int i = 0; i < n; i++)
			{
				cout << "----------------------------------" << endl;
				cout << "������ �" << i + 1;
				x[i].print();
			} break;
		case 2:
		{
			cout << "������� ����� ������: " << endl;
			cin >> r;
			for (int i = 0; i < n; i++)
				x[i].printRooms(r);
		}
		case 3:
		{
			cout << "������� ����� ������: " << endl;
			cin >> r;
			cout << "������� ����������� ���� ����������: " << endl;
			cin >> f1;
			cout << "������� ������������ ���� ����������: " << endl;
			cin >> f2;
			for (int i = 0; i < n; i++)
				x[i].printRandF(r, f1, f2);
		} break;
		case 4:
		{
			cout << "������� �������: " << endl;
			cin >> s;
			for (int i = 0; i < n; i++)
				x[i].printSquare(s);
		} break;
		}
	

	} while (d != 0);
    return 0;
}