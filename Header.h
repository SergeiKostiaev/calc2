#pragma once

#include <time.h>
#include <math.h>
#include <iostream>
#include <conio.h>

//�����������

int Add(int a, int b) //�����
{
	return (a + b);
}
int Sub(int a, int b) //��������
{
	return (a - b);
}
int Mult(int a, int b) //���������
{
	return (a * b);
}
int Del(int a, int b) //�������
{
	return (a / b);
}

void Calc()
{
	int a, b, pt = 1, val;
	while (pt != 0)
	{
		system("cls");
		printf_s("�������� - 1\n");
		printf_s("��������� - 2\n");
		printf_s("��������� - 3\n");
		printf_s("������� - 4\n");
		printf_s("����� - 0\n");

		printf_s("���� ������ ����\n");
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