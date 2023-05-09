#pragma once

#include <time.h>
#include <math.h>
#include <iostream>
#include <conio.h>

//КАЛЬКУЛЯТОР

int Add(int a, int b) //сумма
{
	return (a + b);
}
int Sub(int a, int b) //разность
{
	return (a - b);
}
int Mult(int a, int b) //умножение
{
	return (a * b);
}
int Del(int a, int b) //деление
{
	return (a / b);
}

void Calc()
{
	int a, b, pt = 1, val;
	while (pt != 0)
	{
		system("cls");
		printf_s("Сложение - 1\n");
		printf_s("Вычитание - 2\n");
		printf_s("Умножение - 3\n");
		printf_s("Деление - 4\n");
		printf_s("Выход - 0\n");

		printf_s("Ввод пункта меню\n");
		scanf_s("%d", &pt);
		scanf_s("%d %d", &a, &b);
		switch (pt)
		{
		case 1:
			val = Add(a, b);
			printf_s("%d + %d = %d\n", a, b, val);
			break;
		case 2:
			val = Sub(a, b);
			printf_s("%d - %d = %d\n", a, b, val);
			break;
		case 3:
			val = Mult(a, b);
			printf_s("%d * %d = %d\n", a, b, val);
			break;
		case 4:
			val = Del(a, b);
			printf_s("%d / %d = %d\n", a, b, val);
			break;
		case 0:
			return;
		}
		_getch();
	}
}