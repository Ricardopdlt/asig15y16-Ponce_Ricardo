#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int n;
	float a;
	int n1;
	int n2;
	float suma = 0;
	int i;
	i = 1;


	printf("La serie es M = 1/a + 1/4a + 1/8a......");

	do
	{
		printf("Ingrese la cantidad de numeros a sumar: ");
		cin >> n;

		if (n >= 1)
		{
			do
			{
				printf("Ingrese el valor de a, debe estar entre 1 y 6: ");
				cin >> a;

				if (a >= 1 && a <= 6)
				{
					while (i <= n)
					{
						if (i == 1)
						{
							suma = 1 / a;
							i++;
							continue;
						}
						suma = suma + 1 / (pow(2, i)*a);
						i++;
					}
					cout << endl;
					cout << "M = " << suma << endl;

					_getch();
					return 0;
				}
				else
				{
					cout << endl;
					cout << "ACLARACION!!" << endl;
					cout << "Se menciono que el valor de 'a' debe de estar entre un rango de 1 a 6" << endl;
					n2 = 2;
				}

			} 
			while (n2 == 2);

		}
		if (n == 0)
		{
			cout << "M = " << 0 << endl;
		}
		if (n < 0)
		{
			cout << "ERROR" << endl;
			cout << "Ingrese una cantidad mayor a 0" << endl;
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);




	_getch();

}