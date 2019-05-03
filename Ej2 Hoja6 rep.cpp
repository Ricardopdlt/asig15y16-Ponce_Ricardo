// Ej2 Hoja6 rep

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

	
	float multpar;
	multpar = 1;
	float multimp;
	multimp = 1;
	float multT; // multi total


	do
	{
		printf("Ingrese el numero de terminos (0 < n) : ");
		cin >> n;

		if (n > 0 )
		{
			

			for (i = 2; i <= n; i += 2)
			{
				multpar = multpar * (i/(i+1));
			}
			for (i = 3; i <= n; i += 2)
			{
				multimp = multimp * (i+1)/i;
			}

			multT = 4 * multpar * multimp;

			cout << endl;
			cout << "Resultado: " << multT;

			_getch();
			return 0;

		}
		else
		{
			cout << "ERROR \n";
			cout << "Ingrese un numero de terminos mayor a 0 \n";
			cout << endl;

			n1 = 1;
		}

	} while (n1 == 1);


	_getch();
}