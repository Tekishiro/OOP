// Lab1-2.cpp: определяет точку входа для консольного приложения.
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
	cout << "Введите количество домов: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Введите дом #" << i+1 << endl;
		x[i].setInf();
	}
	system("cls");

	do
	{
		cout << endl << endl << "*****Выберете пункт: *****" << endl;
		cout << "1 - Вывести список домов на экран." << endl;
		cout << "2 - Вывести дома, имеющие заданное число комнат." << endl;
		cout << "3 - Вывести дома, имеющие заданное число комнат и расположенные между заданными этажами." << endl;
		cout << "4 - Вывести дома, чья площадь больше заданной." << endl;
		cout << "0 - Выxод из программы." << endl;
		cin >> d;
		system("cls");
		switch (d)
		{
		case 1:
			for (int i = 0; i < n; i++)
			{
				cout << "----------------------------------" << endl;
				cout << "Запись №" << i + 1;
				x[i].print();
			} break;
		case 2:
		{
			cout << "Введите число комнат: " << endl;
			cin >> r;
			for (int i = 0; i < n; i++)
				x[i].printRooms(r);
		}
		case 3:
		{
			cout << "Введите число комнат: " << endl;
			cin >> r;
			cout << "Введите минимальный этаж промежутка: " << endl;
			cin >> f1;
			cout << "Введите максимальный этаж промежутка: " << endl;
			cin >> f2;
			for (int i = 0; i < n; i++)
				x[i].printRandF(r, f1, f2);
		} break;
		case 4:
		{
			cout << "Введите площадь: " << endl;
			cin >> s;
			for (int i = 0; i < n; i++)
				x[i].printSquare(s);
		} break;
		}
	

	} while (d != 0);
    return 0;
}