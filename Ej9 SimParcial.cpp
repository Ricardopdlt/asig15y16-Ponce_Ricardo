//Ej9 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	float a;
	float b;
	int i;
	int n;
	int n1;
	float suma;

	i = 1;
	suma = 0;
	

	//logica

	printf("La serie es S = a^b/2 + a^2b/4 + a^3b/8......\n");

	do
	{
		printf("Ingrese la cantidad de terminos a sumar: ");
		cin >> n;

		if (n >= 1)
		{
			do
			{
				printf("Ingrese el valor de a, debe estar entre 1 y 5: ");
				cin >> a;

				if (a > 1 && a < 5)
				{

					do
					{
						printf("Ingrese el valor de b, debe estar entre 1 y 5: ");
						cin >> b;

						if (b > 1 && b < 5)
						{
							while (i <= n)
							{
								suma = suma + (pow(a,i*b))/pow(2,i);
								i++;
							}
							cout << endl;
							cout << "S = " << suma << endl;  //salida

							_getch();
							return 0;
						}
						else
						{
							cout << endl;
							cout << "ACLARACION!!" << endl;
							cout << "Se menciono que el valor de 'b' debe de estar entre un rango de 1 a 5" << endl;
							n1 = 3;
						}
					} 
					while (n1 == 3);
				}
				else
				{
					cout << endl;
					cout << "ACLARACION!!" << endl;
					cout << "Se menciono que el valor de 'a' debe de estar entre un rango de 1 a 5" << endl;
					n1 = 2;
				}

			} while (n1 == 2);

		}
		if (n == 0)
		{
			cout << "S = " << 0 << endl;
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