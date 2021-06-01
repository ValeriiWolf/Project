#include <iostream>

short int ai1 = 100;
int bi1 = 1000;
long long cl1 = 1'000'000;
char simbol1 = 'c';
bool logic1 = true;
float drob1 = 1.1117;
double drob2 = 2.11111377;

enum KrestNoll { Pust, Krest, Zero };

const unsigned int SIZE = 3;
KrestNoll Pole[SIZE][SIZE] = { { Pust, Pust, Pust},
								{ Pust, Pust, Pust},
								{ Pust, Pust, Pust} };// можно ли заполнить массив таким образом? = {Pust}

struct MyGame
{
	KrestNoll Pole[SIZE][SIZE];
	int Plaer1ID, Plaer2ID;
	bool Wine;
	bool WinePlaer1;
	KrestNoll ePlaer1, ePlaer2;
};

union MyVar
{
	int MyInt;
	float MyFloat;
	char MyChar;
};

struct Mydata
{
	MyVar data;
	unsigned int isInt : 1;
	unsigned int isChar : 1;
	unsigned int isFloat : 1;
};
int main()
{
	Mydata var;
	var.data.MyFloat = 15.5457983;
	var.isChar = 0;
	var.isFloat = 1;
	var.isInt = 0;

	var.data.MyChar = 'C';
	var.isChar = 1;
	var.isFloat = 0;
	var.isInt = 0;

	var.data.MyInt = 111;
	var.isChar = 0;
	var.isFloat = 0;
	var.isInt = 1;

	return 0;
}