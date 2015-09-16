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
	int n;
	cout << "" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		x[i].setInf();
	}
	system("cls");

    return 0;
}

