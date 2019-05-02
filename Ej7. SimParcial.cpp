//Ej7 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int main()
{
	char tip; //tipo de noticia
	int h; //hora de la publicacion de la noticia
	char ori; //origen de la noticia

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
		cin >> tip;

		if (toupper(tip) == 'X')
		{
			n1 = 2;
		}
		if (toupper(tip) != 'X')
		{
			if (toupper(tip) == 'D' || toupper(tip) == 'A' || toupper(tip) == 'E')
			{
				if (toupper(tip) == 'D')
				{
					sumD++;
					n1 = 3;
				}

				if (toupper(tip) == 'A')
				{
					sumA++;
					n1 = 3;
				}

				if (toupper(tip) == 'E')
				{
					sumE++;
					n1 = 3;
				}


				do
				{
					printf("Ingrese la hora se publico la noticia: ");
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
							cin >> ori;
							cout << endl;

							if (toupper(ori) == 'N' || toupper(ori) == 'E')
							{
								if (toupper(ori) == 'N')
								{
									sumNac++;
								}
								if (toupper(ori) == 'E')
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
				cout << "Ingrese uno de los tipos de noticia propuestos \n";
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

	cout << "Noticias de Entretenimiento: " << sumE << endl;


	if (sumMad > sumMan && sumMad > sumTar && sumMad > sumNoc)
	{
		cout << "En la MADRUGADA se produjeron mas emergencias" << endl;
	}
	else
	{
		if (sumMan > sumMad && sumMad > sumTar && sumMan > sumNoc)
		{
			cout << "En la MANIANA se produjeron mas emergencias" << endl;
		}
		else
		{
			if (sumTar > sumMad && sumTar >= sumMan && sumTar > sumNoc)
			{
				cout << "En la TARDE se produjeron mas emergencias" << endl;
			}
			else
			{
				if (sumNoc > sumMad && sumNoc > sumMan && sumNoc > sumTar)
				{
					cout << "En la NOCHE se produjeron mas emergencias" << endl;
				}
				else
				{
					cout << "No se puede determinar que momento del dia predomina debido a que dos o mas de los altos valores poseen el mismo numero\n";
				}
			}
		}
	}



	if (sumNac < sumExt)
	{
		cout << "Predominan las noticias de origen Extranjero";
	}
	if (sumNac == sumExt)
	{
		cout << "Predominan ambas emergencias";
	}

	if (sumNac > sumExt)
	{
		cout << "Predominan las noticias de origen Nacional";
	}


	_getch();

}