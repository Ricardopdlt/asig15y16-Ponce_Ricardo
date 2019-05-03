//Ej3 Hoja7 rep

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int i;
	int N; // cantidad de días de viaje
	int p1; // pregunta 1
	int p2; // pregunta 2
	int p3; // pregunta 3

	int sumTodB; //todas las preguntas correctas
	sumTodB = 0;

	int sumAp2; // Aprobados con dos respuestas correctas
	sumAp2 = 0;

	int sumMal3; // Contestaron mal la pregunta 3
	sumMal3 = 0;

	int n1;
	i = 1;

	do
	{
		cout << "-------------------------------------------------------------------------------- \n";
		cout << endl;
		printf("Ingrese la cantidad de alumnos: ");
		cin >> N;
		cout << endl;

		if (N > 0 && N <= 40)
		{
			while (i <= N)
			{
				cout << "Para el Alumno " << i << endl;
				cout << "Respuesta en la Pregunta 1: ";
				cin >> p1;
				cout << "Respuesta en la Pregunta 2: ";
				cin >> p2;
				cout << "Respuesta en la Pregunta 3: ";
				cin >> p3;

				cout << endl;

				if (p1 == 3 && p2 == 1 && p3 == 4)
				{
					sumTodB++;
				}
				if ((p1 == 3 && p2 == 1 && p3 != 4) || (p3 == 4 && p2 == 1 && p1 != 3))
				{
					sumAp2++;
				}
				if (p3 != 4)
				{
					sumMal3++;
				}

				i++;

			}

			n1 = 2;

			
		}
		else
		{
			cout << endl;
			cout << "DATO INCORRECTO\n";
			cout << "Ingrese una cantidad de alumno mayor a 0 y menor a 41\n";
			cout << endl;

			n1 = 1;
		}


	} while (n1 == 1);


	float porcTodB; //porcentaje que contesto bien las 3 preguntas
	porcTodB = 100 * sumTodB / N;

	int Aprobados;
	Aprobados = sumTodB + sumAp2;

	int Noexam; // No rindieron el examen
	Noexam = 40 - N;


	cout << endl;

	cout << "----------------------------------------------- \n";

	cout << "Porcentaje de alumnos que hizo bien las tres preguntas:  " << porcTodB << "%" << endl;

	cout << "Cantidad de alumnos aprobados: " << Aprobados << endl;

	cout << "Cantidad de alumnos que hizo mal la pregunta 3: " << sumMal3 << endl;

	cout << "Cantidad de alumnos que no rindieron el examen: " << Noexam << endl;

	_getch();
	

}