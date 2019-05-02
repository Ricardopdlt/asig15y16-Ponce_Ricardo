//Ej8 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int main()
{
	char emer; //emergencia
	int h; //hora de la emergencia
	char orig; //origen de la emergencia

	int sumEc = 0;
	int sumSa = 0;
	int sumRa = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumNat;
	int sumInt;

	int n1;

	sumNat = 0;
	sumInt = 0;

	do
	{
		cout << "-------------------------------------------------------------------------------- \n";
		cout << endl;
		printf("Ingrese el tipo de emergencia (E: Ecologica, S: Sanitaria, R: Radioactiva): ");
		cin >> emer;

		if (toupper(emer) == 'F')
		{
			n1 = 2;
		}
		if (toupper(emer) != 'F')
		{
			if (toupper(emer) == 'E' || toupper(emer) == 'S' || toupper(emer) == 'R')
			{
				if(toupper(emer)=='E')
				{
					sumEc++;
					n1 = 3;
				}
				if (toupper(emer) == 'S')
				{
					sumSa++;
					n1 = 3;
				}
				if (toupper(emer) == 'R')
				{
					sumRa++;
					n1 = 3;
				}


				do
				{
					printf("Ingrese la hora en que ocurrio la emergencia: ");
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
							printf("Ingrese el origen de la emergencia (N: Naturaleza, I: Intervencion del hombre): ");
							cin >> orig;
							cout << endl;

							if (toupper(orig) == 'N' || toupper(orig) == 'I')
							{
								if (toupper(orig) == 'N')
								{
									sumNat++;
								}
								if (toupper(orig) == 'I')
								{
									sumInt++;
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
				cout << "Ingrese uno de los tipos de emergencia propuestos \n";
				cout << endl;
				n1 = 1;
			}
		}
		
		
	} 
	while (n1 == 1);

	cout << endl;

	cout << "Los resultados son: \n";

	cout << "----------------------------------------------- \n";

	cout << "Emergencia Ecologica: " << sumEc << endl;

	cout << "Emergencia Sanitaria: " << sumSa << endl;

	cout << "Emergencia Radioactiva: " << sumRa << endl;


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



	if (sumNat < sumInt)
	{
		cout << "Predominan las emergencias por Intervencion del hombre";
	}
	if (sumNat == sumInt)
	{
		cout << "Predominan ambas emergencias";
	}

	if (sumNat > sumInt)
	{
		cout << "Predominan las emergencias por la Naturaleza";
	}
	
	
	_getch();
			   		 	  
}
