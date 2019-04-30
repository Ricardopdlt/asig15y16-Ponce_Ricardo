#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int k;
	float a;
	float e;
	int i;
	int z;

	e = 0;
	i = 1;
	z = 1;

	printf("Ingrese el numero de terminos de la serie: ");
	cin >> k;

	if (k > 0 && k <= 20)
	{
		printf("Ingrese el valor de a: ");
		cin >> a;

		while (i <= k)
		{
			if (i == 1)
			{
				e = 1;
				i++;
				continue;
			}
			z = z * (i - 1);
			e = e + (pow(a, i - 1) / z);
			i++;
		}
		cout << "e^a = " << e;

	}
	else
	{
		printf("ERROR! \n");
		printf("Ingrese un numero de terminos en el rango de 1 a 20 ");
	}

	_getch();
}