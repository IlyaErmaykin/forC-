// CountHeight.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	double amount; // ��������� ������
	double length, weigth; // ���������� ����� � ������ 
	double height; // ��������� ������

	cout << "Vvedite znachenie amount \n"; // ����� �� �����
	cin >> amount; // ���������� � ����������

	cout << "Vvedite znachenie length \n"; // ����� �� �����
	cin >> length; // ���������� � ����������

	cout << "Vvedite znachenie weigth \n"; // ����� �� �����
	cin >> weigth; // ���������� � ����������

	height = amount / (length * weigth); // ����� height

	cout << amount << "/" << "(" << length << "*" << weigth << ")" << "=" << height << endl; // ��������� "�������"
	
	_getch(); // �������� ������� ����� ��������
	
	return 0; //������� "0"
}

