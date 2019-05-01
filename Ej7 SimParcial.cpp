//Ej7 SimParcial

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()

{
	// entrada
	char tipo; //tipo de noticia
	int h; //hora de publicacion de la noticia
	char orig; //origen de la noticia
	
	int sumD = 0;
	int sumA = 0;
	int sumE = 0;

	int sumMad = 0;
	int sumMan = 0;
	int sumTar = 0;
	int sumNoc = 0;

	int sumNac = 0;
	int sumExt = 0;


	while (tipo != 'X')

	{
		cout << "--------------------------- \n";
		cout << endl;
		printf("Tipo de noticia (D: Deportes, A: Actualidad, E: Entretenimiento): ");
		cin >> tipo;

		if (toupper(tipo) == 'X')
		{
			break;
		}
		switch (toupper (tipo))

		{
		case 'D':

			sumD++;
			break;

		case 'A':

			sumA++;
			break;

		case 'E':

			sumE++;
			break;

		default:

			cout << "ERROR \n";
			cout << "Por favor ingrese un tipo de noticia correcto. \n";

			_getch();
			return 0;

		}

		if (tipo != 'X')

		{

			printf("Hora de publicacion: ");
			cin >> h;

			if (h >= 0 && h <= 23)
			{

				if (h >= 0 && h <= 5)
				{
					sumMad++;
				}

				if (h >= 6 && h <= 12)
				{
					sumMan++;
				}

				if (h >= 13 && h<= 17)
				{
					sumTar++;
				}

				if (h >= 18 && h <= 23)
				{
					sumNoc++;
				}

			}
			else
			{
				cout << "ERROR \n";
				cout << "Por favor ingrese una hora dentro del rango 0-23 \n";

				_getch();
				return 0;
			}

			printf("Origen de la noticia (N: Nacional, E: Extranjero): ");
			cin >> orig;
			cout << endl;

			switch (toupper(orig))

			{
			case 'N':

				sumNac++;
				break;

			case 'E':

				sumExt++;
				break;

			default:

				cout << "ERROR \n";
				cout << "Por favor ingrese un origen de la noticia correcto. \n";

				_getch();
				return 0;
			}

		}

		else

		{
			exit;
		}

	}

	cout << endl;

	cout << "Los resultados son: \n";

	cout << "----------------------------------------------- \n";

	cout << "Noticias de Deporte: " << sumD << endl;

	cout << "Noticias de Actualidad: " << sumA << endl;

	cout << "Noticias de Entretenimiento: " << sumE << endl;


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


	if ( sumNac < sumExt)
	{
		cout << "Predominan las noticias del Extranjero";
	}
	else

		if (sumNac == sumExt)
		{
			cout << "Predominan ambas noticias";
		}

		else
		{
			cout << "Predominan las noticias Nacionales";
		}

	_getch();

}