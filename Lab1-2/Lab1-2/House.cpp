//Создать класс House : id, Номер квартиры, Площадь, Этаж, Количество комнат, Улица, Тип здания, Срок эксплуатации.
//Функции - члены реализуют запись и считывание полей(проверка корректности), 
//расчета возраста задания(необходимость в кап.ремонте).

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
	cout << "Введите ID дома:" << endl;
	cin >> id;
	cout << "Номер дома:" << endl;
	cin >> number;
	cout << "Площадь:" << endl;
	cin >> square;
	cout << "Этаж:" << endl;
	cin >> floor;
	cout << "Количество комнат:" << endl;
	cin >> rooms;
	cout << "Улица:" << endl;
	cin >> street;
	cout << "Тип дома:" << endl;
	cin >> type;
	cout << "Время эксплуатации:" << endl;
	cin >> time;
	cout << "-------------------------------------" << endl;
}

void House::print()
{
	cout << endl;
	cout << "Id дома: " << House::id << endl;
	cout << "Номер дома: " << House::number << endl;
	cout << "Площадь дома: " << House::square << endl;
	cout << "Этаж: " << House::floor << endl;
	cout << "Количество комнат: " << House::rooms << endl;
	cout << "Улица: " << House::street << endl;
	cout << "Тип дома: " << House::type << endl;
	cout << "Время эксплуатации: " << House::time << endl;
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