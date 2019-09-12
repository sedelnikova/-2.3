// Иван 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, P, Q, S;
	cout << "Введите координаты точек на числовой оси: ";

	cin >> A >> B >> C;
	if (A < C && C < B)
	{
		P = (C - A) * (B - C);
		cout << "Произведение = " << P;
	}
	else
	{
		cout << "Пардон, данные некорректны";

	}
	return 0;
}