//Ej4 Sim Parcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	float a;
	int n;
	int i;
	int n1;
	int n2;
	float suma;

	suma = 0;
	i = 1;
	
	//logica

	printf("La serie es suma = a/2 - 3(a^2)/4 + 5(a^4)/6 +...(-1)^(n+1)*(2n-1)*a^2^(n-1)/2n  \n");
	
	do
	{
		printf("Ingrese el numero de terminos (0 < n < 21): ");
		cin >> n;

		if (n > 0 && n < 21)
		{
			do
			{
				printf("Ingrese el valor de a ((0.5 < a < 2): ");
				cin >> a;
				
				if (a > 0.5 && a < 2)
				{
					while (i <= n)
					{
						suma = suma + ((pow(-1, i + 1)*((2 * i) - 1)*pow(a, pow(2, i - 1))) / (2 * i));
						i++;
					}

					printf("Suma: ");  //salida
					cout << suma;

					_getch();
					return 0;

				}
				else
				{
					printf("ERROR");
					printf("El valor de a debe ser entre 0.5 a 2 \n");
					cout << endl;
					n2 = 2;
				}
			} 
			while (n2 == 2);
		}
		else
		{
			printf("ERROR");
			printf("El numero de terminos debe ser entre 0 a 21 \n");
			cout << endl;
			n1 = 1;
		}
	} 
	while (n1 == 1);


	_getch();
}