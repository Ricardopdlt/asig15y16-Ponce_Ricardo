//Ej2 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int main()
{
	char lugar; // lugar de ingreso
	char disp; // dispositivo
	int h; //hora

	int sumA = 0;
	int sumB = 0;
	int sumC = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumCel;
	int sumTab;
	int sumCom;

	int n1;

	sumCel = 0;
	sumTab = 0;
	sumCom = 0;

	do
	{
		cout << "-------------------------------------------------------------------------------- \n";
		cout << endl;
		printf("Ingrese el lugar de ingreso (A: Lima, B: Otra region, C: Otro pais): ");
		cin >> lugar;

		if (toupper(lugar) == 'G')
		{
			n1 = 2;
		}
		if (toupper(lugar) != 'G')
		{
			if (toupper(lugar) == 'A' || toupper(lugar) == 'B' || toupper(lugar) == 'C')
			{
				if (toupper(lugar) == 'A')
				{
					sumA++;
				}
				if (toupper(lugar) == 'B')
				{
					sumB++;
				}
				if (toupper(lugar) == 'C')
				{
					sumC++;
				}

				do
				{
					printf("Ingrese la hora de ingreso: ");
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
							printf("Ingrese el tipo de dispositivo (C: Celular, T: Tablet, U: Computador): ");
							cin >> disp;
							cout << endl;

							if (toupper(disp) == 'C' || toupper(disp) == 'T' || toupper(disp) == 'U')
							{
								if (toupper(disp) == 'C')
								{
									sumCel++;
								}
								if (toupper(disp) == 'T')
								{
									sumTab++;
								}
								if (toupper(disp) == 'U')
								{
									sumCom++;
								}

								n1 = 1;


							}
							else
							{
								cout << endl;
								cout << "ERROR \n";
								cout << "Ingrese uno de los dispositivos propuestos \n";
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
				cout << "Ingrese uno de los lugares de ingreso propuestos \n";
				cout << endl;
				n1 = 1;
			}
		}


	} while (n1 == 1);

	cout << endl;

	cout << "Los resultados son: \n";

	cout << "----------------------------------------------- \n";

	cout << "Lima: " << sumA << endl;

	cout << "Otra region: " << sumB << endl;

	cout << "Otro pais: " << sumC << endl;


	if (sumMad > sumMan && sumMad > sumTar && sumMad > sumNoc)
	{
		cout << "En la MADRUGADA se produjeron mas ingresos" << endl;
	}
	else
	{
		if (sumMan > sumMad && sumMad > sumTar && sumMan > sumNoc)
		{
			cout << "En la MANIANA se produjeron mas ingresos" << endl;
		}
		else
		{
			if (sumTar > sumMad && sumTar >= sumMan && sumTar > sumNoc)
			{
				cout << "En la TARDE se produjeron mas ingresos" << endl;
			}
			else
			{
				if (sumNoc > sumMad && sumNoc > sumMan && sumNoc > sumTar)
				{
					cout << "En la NOCHE se produjeron mas ingresos" << endl;
				}
				else
				{
					cout << "No se puede determinar que momento del dia predomina debido a que dos o mas de los altos valores poseen el mismo numero\n";
				}
			}
		}
	}

	if (sumCel > sumTab && sumCel > sumCom)
	{
		cout << "Predominan los ingresos por Celular";
	}
	if (sumCel == sumTab && sumCel == sumCom)
	{
		cout << "Predominan todos los dispositivos utilizados para ingresos";
	}

	if (sumTab > sumCel && sumTab > sumCom)
	{
		cout << "Predominan los ingresos por Tableta";
	}

	if (sumCom > sumCel && sumCom > sumTab)
	{
		cout << "Predominan los ingresos por Computadora";
	}



	_getch();
}