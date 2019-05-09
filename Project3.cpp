#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	//Entrada
	int n;
	int cont;
	cout << " Ingrese un numero postivo menor a 11: ";
	cin >> n;

	//Test
	/*Numero positivo mayor a 11*/

	//Lógica

	//Parte superior del triángulo
	for (int j = 0; j < n; ++j) {

		for (int i = 0; i < n - j - 1; i++)
		{
			cout << "  ";
		}
		for (int i = 0; i < 2 * j + 1; i++)
		{
			if (j % 2 == 0)
			{
				if (i > 0 && i < 2 * j + 1)
				{
					if (i > 0 && i < 2 * j)
					{
						cout << "* ";
					}
					if (i == 2 * j)
					{
						cout << "- ";
					}
				}
				if (i == 0)
				{
					cout << "- ";
				}
			}
			if (j % 2 != 0)
			{
				if (i > 0 && i < 2 * j + 1)
				{
					if (i > 0 && i < 2 * j)
					{
						cout << "* ";
					}
					if (i == 2 * j)
					{
						cout << "| ";
					}
				}
				if (i == 0)
				{
					cout << "| ";
				}
			}
		}

		cout << endl;
	}

	//Salida
	_getch();
}