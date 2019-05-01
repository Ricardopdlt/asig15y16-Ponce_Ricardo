//Ej2 SimParcial

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	char lugar; //lugar de ingreso
	char disp; //dispositivo
	int hora; //hora de ingreso
	int n1;
	int n2;
	int n3;


	int sumA = 0;
	int sumB = 0;
	int sumC = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumCe = 0;
	int sumTa = 0;
	int sumCo = 0;


	//logica

	while (lugar != toupper('G'))
	{

		cout << "--------------------------- \n";
		cout << endl;
		cout << "Lugar Ingreso [A: Lima, B: Otra region o C: Otro pais]: ";

		cin >> lugar;

		if (toupper(lugar) == 'G')
		{
			break;
		}


		switch (toupper(lugar))

		{
		case 'A':

			sumA++;
			break;

		case 'B':

			sumB++;
			break;

		case 'C':

			sumC++;
			break;

		default:

			cout << "ERROR \n";
			cout << "Por favor ingrese un lugar de ingreso correcto. \n";

			_getch();
			return 0;

		}





		cout << "Hora de ingreso: ";

		cin >> hora;

		if (hora >= 0 && hora <= 5)
		{
			sumMad++;
		}

		else
		{

			if (hora >= 6 && hora <= 12)
			{
				sumMan++;
			}

			else
			{

				if (hora >= 13 && hora <= 17)
				{
					sumTar++;
				}

				else
				{

					if (hora >= 18 && hora <= 23)
					{
						sumNoc++;
					}

					else
					{
						cout << "Por favor ingrese una hora dentro del rango 0-23 \n";

						_getch();
						return 0;
					}

				}

			}

		}



		cout << "Tipo Dispositivo [C: Celular, T: Tablet o U: Computador]: ";

		cin >> disp;
		cout << endl;

		switch (toupper(disp))

		{
		case 'C':

			sumCe++;
			break;

		case 'T':

			sumTa++;
			break;

		case 'U':

			sumCo++;
			break;

		default:

			cout << "Por favor ingrese un tipo de dispositivo correcto. \n";

			_getch();
			return 0;
		}


	}


	//salida 

	cout << "************************************" << endl;

	cout << "Lugar ingreso " << endl;

	cout << "Lima: " << sumA << endl;

	cout << "Otra region: " << sumB << endl;

	cout << "Otro pais: " << sumC << endl;



	cout << "************************************" << endl;

	cout << "Hora de ingreso " << endl;

	cout << "Madrugada: " << sumMad << endl;

	cout << "Manana: " << sumMan << endl;

	cout << "Tarde: " << sumTar << endl;

	cout << "Noche: " << sumNoc << endl;



	cout << "************************************" << endl;

	cout << "Tipo de dispositivo " << endl;

	cout << "Celular: " << sumCe << endl;

	cout << "Tablet: " << sumTa << endl;

	cout << "Computador: " << sumCo << endl;


	_getch();
}