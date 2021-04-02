#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
# include <stdio.h>
# include <math.h>



double mpr(double a, double h, int n)
{
	double s = 0, i2;
	int i;
	for (i = 1; i < (n + 1); i++)
		s = s + log(a + (i - 0.5) * h);
	i2 = h * s;
	return i2;
}
double mtr(double a, double b, double h, int n)
{
	double s = 0, i3;
	int i;
	for (i = 1; i < n; i++)
		s = s + log(a + i * h);
	i3 = h * ((log(a) + log(b)) / 2 + s);
	return i3;
}
void main()
{
	setlocale(0, "");
	double a=1, b=5, h;
	int n;
	printf("Введите количество отрезков разбиения\n");
	scanf("%d", &n);
	h = (double)(b - a) / n;
	printf("Интеграл по методу прямоугольников равен %lg\n", mpr(a, h, n));
	printf("Интеграл по методу трапеций равен %lg\n", mtr(a, b, h, n));
	system("pause");
}