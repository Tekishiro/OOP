// Lab1-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Student.h"
#include <iostream>
using namespace std;


int main()
{
	Student a1, a2;
	a1.setName("Oleg");
	a1.setAge(17);
	a2.setName("Ann");
	a2.setAge(18);

	char* q = a1.getName();
	int w = a1.getAge();
	a1.print();
	a2.print();





    return 0;
}

