#include "stdafx.h"
#include "Student.h"
using namespace std;

Student::Student()
{
}

Student::Student(char* NAME, int AGE)
{
	strcpy(name, NAME);
	age = AGE;
}

void Student::setAge(int AGE)
{
	age = AGE;
}

void Student::setName(char* NAME)
{
	strcpy(name, NAME);
}

Student::~Student(void)
{
}

void Student::print()
{

	cout << "Name - " << Student::name << endl;
	cout << "Age - " << Student::age << endl;
}

char* Student::getName(void)
{
	return name;
}

int Student::getAge(void)
{
	return age;
}

House::House()
{
	cout << "Object created" << endl;
}

House::House(unsigned int ID, unsigned int NUMBER, unsigned int SQUARE, unsigned int FLOOR, unsigned int ROOMS, char* STREET, char* TYPE, unsigned int TIME)
{
	id = ID;
	number = NUMBER;
	square = SQUARE;
	floor = FLOOR;
	rooms = ROOMS;
	strcpy(street, STREET);
	strcpy(type, TYPE);
	time = TIME;
	cout << "Object created" << endl;
}

void House::setId(unsigned int ID)
{
	id = ID;
}

void House::setNumber(unsigned int NUMBER)
{
	number = NUMBER;
}

void House::setSquare(unsigned int SQUARE)
{
	square = SQUARE;
}

void House::setFloor(unsigned int FLOOR)
{
	floor = FLOOR;
}

void House::setRooms(unsigned int ROOMS)
{
	rooms = ROOMS;
}

void House::setStreet(char* STREET)
{
	strcpy(street, STREET);
}

void House::setType(char* TYPE)
{
	strcpy(type, TYPE);
}

void House::setTime(unsigned int TIME)
{
	time = TIME;
}

int House::getId(void)
{
	return id;
}

int House::getNumber(void)
{
	return number;
}

int House::getSquare(void)
{
	return square;
}

int House::getFloor(void)
{
	return floor;
}

int House::getRoom(void)
{
	return rooms;
}

char* House::getStreet(void)
{
	return street;
}

char* House::getType(void)
{
	return type;
}

int House::getTime(void)
{
	return time;
}

void House::print()
{
	cout << "" <<  << endl;

}

House::~House(void)
{
	cout << "Object destroyed" << endl;
}