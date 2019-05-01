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
	int n1;

	e = 0;
	i = 1;
	z = 1;


	printf("La serie e^a es 1 + a + a^2/2! + a^3/3! + ......");

	do
	{
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

			_getch();
			return 0;

		}
		else
		{
			printf("ERROR! \n");
			printf("Ingrese un numero de terminos en el rango de 1 a 20 \n");
			cout << endl;
			n1 = 1;
		}
	} 
	while (n1 == 1);

	_getch();
}