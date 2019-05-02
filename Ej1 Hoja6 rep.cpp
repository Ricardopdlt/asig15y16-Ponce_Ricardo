//Ej1 Hoja6 Est.Rep

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int n;
	float a;
	float b;
	float s;
	int k;
	int z;
	int n1;

	s = 0;
	k = 1;
	z = 1;

	//logica

	printf("La serie S es (-1)^(k+1)*(a^k)*(b^(k+1))/(a-b)*(k!) ......\n");

	do
	{
		printf("Ingrese el numero de terminos de la serie: ");
		cin >> n;

		if (n > 0 && n <= 10)
		{
			do
			{
				printf("Ingrese el valor de a (4 <= a <= 6): ");
				cin >> a;

				if (a >= 4 && a <= 6)
				{
					do
					{
						printf("Ingrese el valor de b (1 <= b <= 3): ");
						cin >> b;

						if (b >= 1 && b <= 3)
						{
							while (k <= n)
							{
								z = z * (k);
								s = s + (pow(-1, k + 1)*pow(a, k)*pow(b, k + 1)) / ((a - b)*(z));
								k++;
							}
							cout << "S = " << s;   //salida

							_getch();
							return 0;
						}
						else
						{
							printf("ERROR! \n");
							printf("Ingrese un valor de b en el rango de 1 a 3 \n");
							cout << endl;
							n1 = 3;
						}
					} 
					while (n1 = 3);
				}
				else
				{
					printf("ERROR! \n");
					printf("Ingrese un valor de a en el rango de 4 a 6 \n");
					cout << endl;
					n1 = 2;
				}


			} while (n1 == 2);
		}
		else
		{
			printf("ERROR! \n");
			printf("Ingrese un numero de terminos en el rango de 1 a 10 \n");
			cout << endl;
			n1 = 1;
		}
	} while (n1 == 1);

	_getch();
}