// CountHeight.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	double amount; // Объявлние объема
	double length, weigth; // Объявление длины и ширины 
	double height; // Объявлене высоты

	cout << "Vvedite znachenie amount \n"; // Вывод на экран
	cin >> amount; // Присвоение к переменной

	cout << "Vvedite znachenie length \n"; // Вывод на экран
	cin >> length; // Присвоение к переменной

	cout << "Vvedite znachenie weigth \n"; // Вывод на экран
	cin >> weigth; // Присвоение к переменной

	height = amount / (length * weigth); // Поиск height

	cout << amount << "/" << "(" << length << "*" << weigth << ")" << "=" << height << endl; // Наведение "красоты"
	
	_getch(); // Ожидание нажатия любой клавишиы
	
	return 0; //Вернуть "0"
}

