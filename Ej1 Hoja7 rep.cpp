// Ej1 Hoja7 rep

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	int i;
	int n;
	int n1;

	float x;
	float y;
	float a;
	float sumapar;
	sumapar = 0;
	float sumaimp;
	sumaimp = 0;
	float sumaT; // suma total

	
	do
	{
		printf("Ingrese el numero de terminos (0 < n < 31): ");
		cin >> n;

		if (n > 0 && n <= 30)
		{
			printf("Ingrese el valor de a: ");
			cin >> a;

			printf("Ingrese el valor de x: ");
			cin >> x;

			printf("Ingrese el valor de y: ");
			cin >> y;

			for (i = 2; i <= n; i += 2)
			{
				sumapar = sumapar + (3 * i*y) / (pow(2, i - 1)*pow(a, i - 1));
			}
			for (i = 1; i <= n; i += 2)
			{
				sumaimp = sumaimp + (-3 * i*x) / (pow(2, i - 1)*pow(a, i - 1));
			}

			sumaT = sumapar + sumaimp,

			cout << endl;
			cout << "La sumatoria es: " << sumaT;

			_getch();
			return 0;

		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un numero de terminos mayor a 0 y menor a 31\n";
			cout << endl;
		}

	} 
	while (n1 = 1);


	_getch();
}