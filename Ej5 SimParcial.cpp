//Ej5 SimParcial

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	//entrada 

	int l;
	int i;
	int e;
	int n1;

	//logica 

	do
	{
	    cout << "Ingrese la longitud del lado del cuadrado (mayor a 0 y menor a 10): ";
	    cin >> l;

		if (l > 0 && l < 10)
		{
			for (i = 1; i <= l; i++)
			{

				for (e = 1; e <= l; e++)
				{

					if (e == 1 || e == l || i == 1 || i == l)
					{
						cout << "* ";
					}

					else
					{
						cout << "  ";
					}

				}

				cout << endl;    //salida

			}

			_getch();
			return 0;
		}
		else
		{
			printf("ERROR \n");
			printf("La longitud del lado del cuadrado debe ser un entero positivo menor a 10 \n");
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);

	_getch();

}