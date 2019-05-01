// Ej6 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int main()

{
	int l;
	int e;
	int i;
	int n1;

	do
	{
		printf("Ingrese la longitud del lado del rombo: ");
		cin >> l;

		if (l > 0 && l < 10)
		{
			for (i = 1; i <= l; i++)
			{

				for (e = 1; e <= i; e++)
				{

					if (i == 1 || e == 1 || i == l || i == e)
					{
						cout << "* ";
					}

					else
					{
						cout << "  ";
					}

				}

				cout << endl;

			}

			for (int i = l - 1; i >= 1; i--)
			{

				for (int e = l; e >= 1; e--)
				{

					if (e == 1 || i == e)
					{
						cout << "* ";
					}

					else
					{
						cout << "  ";
					}

				}

				cout << endl;

			}

			_getch();
			return 0;
		}

		else
		{
			cout << "ERROR \n";
			cout << "El valor de la longitud del lado del rombo debe ser mayor a 0 y menor a 10 \n";
			cout << endl;
			n1 = 1;
		}
	}
	while (n1 == 1);

	_getch();

}