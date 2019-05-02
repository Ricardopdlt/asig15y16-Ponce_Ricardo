//Ej2 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int main()
{
	char tipo; // tipo de noticia
	char orig; //origen de la noticia
	int h; //hora

	int sumD = 0;
	int sumA = 0;
	int sumE = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumNac;
	int sumExt;

	int n1;

	sumNac = 0;
	sumExt = 0;

	do
	{
		cout << "-------------------------------------------------------------------------------- \n";
		cout << endl;
		printf("Ingrese el tipo de noticia (D: Deportes, A: Actualidad, E: Entretenimiento): ");
		cin >> lugar;

		if (toupper(lugar) == 'X')
		{
			n1 = 2;
		}
		if (toupper(lugar) != 'X')
		{
			if (toupper(lugar) == 'D' || toupper(lugar) == 'A' || toupper(lugar) == 'E')
			{
				switch (toupper(lugar))
				{

				case 'D':

					sumD++;
					n1 = 3;

				case 'A':

					sumA++;
					n1 = 3;

				case 'E':

					sumE++;
					n1 = 3;

				}

				do
				{
					printf("Ingrese la hora de publicacion de la noticia: ");
					cin >> h;

					if (h > 0 && h < 24)
					{
						if (h >= 0 && h <= 5)
						{
							sumMad++;
							n1 = 4;
						}
						if (h >= 6 && h <= 12)
						{
							sumMan++;
							n1 = 4;
						}
						if (h >= 13 && h <= 17)
						{
							sumTar++;
							n1 = 4;
						}
						if (h >= 18 && h <= 23)
						{
							sumNoc++;
							n1 = 4;
						}

						do
						{
							printf("Ingrese el origen de la noticia (N: Nacional, E: Extranjera): ");
							cin >> orig;
							cout << endl;

							if (toupper(disp) == 'N' || toupper(disp) == 'E')
							{
								if (toupper(disp) == 'N')
								{
									sumNac++;
								}
								if (toupper(disp) == 'E')
								{
									sumExt++;
								}
							
								n1 = 1;


							}
							else
							{
								cout << endl;
								cout << "ERROR \n";
								cout << "Ingrese uno de los origenes propuestos \n";
								cout << endl;
								n1 = 4;
							}


						} while (n1 == 4);


					}
					else
					{
						cout << endl;
						cout << "ERROR \n";
						cout << "Ingrese una hora en el rango de 0 a 23 \n";
						cout << endl;
						n1 = 3;
					}
				} while (n1 == 3);
			}
			else
			{
				cout << endl;
				cout << "ERROR \n";
				cout << "Ingrese uno de los tipos de noticias propuestos \n";
				cout << endl;
				n1 = 1;
			}
		}


	} while (n1 == 1);

	cout << endl;

	cout << "Los resultados son: \n";

	cout << "----------------------------------------------- \n";

	cout << "Noticias de Deporte: " << sumD << endl;

	cout << "Noticias de Actualidad: " << sumA << endl;

	cout << "Noticias de Entrenimiento: " << sumE << endl;


	if (sumMad >= sumMan && sumMad >= sumTar && sumMad >= sumNoc)
	{
		cout << "En la MADRUGADA se publicaron mas noticias" << endl;
	}

	if (sumMan >= sumMad && sumMad >= sumTar && sumMan >= sumNoc)
	{
		cout << "En la MANIANA se publicaron mas noticias" << endl;
	}

	if (sumTar >= sumMad && sumTar >= sumMan && sumTar >= sumNoc)
	{
		cout << "En la TARDE se publicaron mas noticias" << endl;
	}

	if (sumNoc >= sumMad && sumNoc >= sumMan && sumNoc >= sumTar)
	{
		cout << "En la NOCHE se publicaron mas noticias" << endl;
	}


	if (sumExt > sumNac)
	{
		cout << "Predominan las noticias del Extranjero";
	}
	if (sumExt == sumNac)
		cout << "Predominan ambas noticias";
	}

	if (sumNac > sumExt)
	{
		cout << "Predominan las noticias Nacionales";
	}



	_getch();
}