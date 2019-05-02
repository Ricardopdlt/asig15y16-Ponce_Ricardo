//Ej10 SimParcial

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	//entrada

	int n1;
	int n;
	int i;
	int j;

	//logica

	do
	{
		cout << " Ingrese un numero positivo menor a 11: ";
		cin >> n;

		if(n>0 && n<11)
		{
			//Parte superior del triángulo
			for (int j = 0; j < n; ++j)
			{
				for (i = 0; i < n - j - 1; ++i)
					cout << "  ";
				for (i = 0; i < 2 * j + 1; ++i)
					cout << i + 1 << " ";
				cout << endl;
			}
			//Parte Inferior Triángulo
			for (int j = n - 2; j >= 0; --j)
			{
				for (i = 0; i < n - j - 1; ++i)
					cout << "  ";
				for (i = 0; i < 2 * j + 1; ++i)
					cout << i + 1 << " ";
				cout << endl;
			}

			_getch();   //salida
			return 0;
		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un numero mayor a 0 y menor a 11 \n";
			cout << endl;
			n1 = 1;
		}
	}
	while (n1 == 1);
	
	
	
	_getch();
}