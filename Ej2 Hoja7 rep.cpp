//Ej2 Hoja7 rep

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int i;
	char dest; //destino
	char tran; //transporte
	int cant; // cantidad de días de viaje
	   
	int sumCa = 0;
	int sumHu = 0;
	int sumTa = 0;

	float monto;
	float sumMont; // suma de montos
	sumMont = 0;

	int precio; //precio del transporte en soles
	int precioS; //precio del transporte en dolares

	int sumPrecio; // suma de precios del bus
	sumPrecio = 0;
	int sumPrecioS; // suma de precios del avion
	sumPrecioS = 0;

	int hot; // precio del hotel

	int n1;
	i = 1;

	do
	{
		cout << "-------------------------------------------------------------------------------- \n";
		cout << endl;
		printf("Ingrese el destino *Mayuscula* (C: Cajamarca, T: Tacna, H: Huaraz, F: Fin): ");
		cin >> dest;

		if (dest == 'F')
		{
			n1 = 2;
		}
		if (dest != 'F')
		{
			if (dest == 'C' || dest == 'T')
			{
				if (dest == 'C')
				{
					sumCa++;
					n1 = 3;
				}
				if (dest == 'T')
				{
					sumTa++;
					n1 = 3;
				}

				do
				{
					printf("Ingrese el tipo de transporte *Mayuscula* (B: Bus, A: Avion): ");
					cin >> tran;

					if (tran == 'B' || tran == 'A')
					{
							if (dest == 'C' && tran == 'B')
							{
								precio = 165;
								hot = 20;
								n1 = 4;
							}
							if (dest == 'C' && tran == 'A')
							{
								precioS = 84;
								hot = 20;
								n1 = 4;
							}
							if (dest == 'T' && tran == 'B')
							{
								precio = 138;
								hot = 30;
								n1 = 4;
							}
							if (dest == 'T' && tran == 'A')
							{
								precioS = 133;
								hot = 30;
								n1 = 4;
							}
							

							do
							{
								printf("Ingrese la cantidad de dias del viaje (debe ser mayor a 2 dias) : ");
								cin >> cant;
								cout << endl;

								if (cant >=3)
								{
									if (tran == 'A')
									{
										monto = (hot*cant*2.68) + (precioS*2.68);
									}
									if (tran == 'B' || dest == 'H')
									{
										monto = (hot*cant*2.68) + (precio);
									}

									cout << "Monto a pagar: " << monto << endl;

									sumMont = sumMont + monto*(i/i);
									sumPrecio = sumPrecio + precio * (i / i);
									sumPrecioS = sumPrecioS + precioS * (i / i);
									i++;
									
									
									
									n1 = 1;
								
								}
								else
								{
									cout << endl;
									cout << "ERROR \n";
									cout << "Ingrese una cantidad de dias mayor a 2 \n";
									cout << endl;

									n1 = 4;
								}


							} while (n1 == 4);

					}
					else
					{
						cout << endl;
						cout << "ERROR \n";
						cout << "Ingrese uno de los tipos de transporte propuestos \n";
						cout << endl;
						n1 = 3;
					}
				} while (n1 == 3);
			}
			if (dest != 'C' && dest != 'T' && dest != 'H')
			{
				cout << endl;
				cout << "ERROR \n";
				cout << "Ingrese uno de los destinos propuestos en mayusculas \n";
				cout << endl;
				n1 = 1;
			}
			if (dest == 'H')
			{
				sumHu++;
				precio = 63;
				hot = 30;
				n1 = 4;

				do
				{
					printf("Ingrese la cantidad de dias del viaje (debe ser mayor a 2 dias) : ");
					cin >> cant;
					cout << endl;

					if (cant >= 3)
					{
						if (tran == 'A')
						{
							monto = (hot*cant*2.68) + (precioS*2.68);
						}
						if (tran == 'B' || dest == 'H')
						{
							monto = (hot*cant*2.68) + (precio);
						}

						cout << "Monto a pagar: " << monto << endl;

						sumMont = sumMont + monto * (i / i);
						sumPrecio = sumPrecio + precio * (i / i);
						sumPrecioS = sumPrecioS + precioS * (i / i);
						i++;



						n1 = 1;

					}
					else
					{
						cout << endl;
						cout << "ERROR \n";
						cout << "Ingrese una cantidad de dias mayor a 2 \n";
						cout << endl;

						n1 = 4;
					}


				} while (n1 == 4);
			}
			
		}


	} while (n1 == 1);


	int sumTot;
	sumTot = sumCa + sumTa + sumHu;

	int sum30; //viajeros que escogieron un hotel de 30 dolares
	sum30 = sumTa + sumHu;

	float porcHu; //porcentaje de viajeros que escogieron Huaraz
	porcHu = (100 * sumHu) / sumTot;

	cout << endl;

	cout << endl;

	cout << "----------------------------------------------- \n";

	cout << "Cantidad de viajeros que van a un hotel de US$30: " << sum30 << endl;

	cout << "Porcentaje de viajeros que elegieron viajar a Huaraz: " << porcHu << "%" << endl;

	cout << "Ingreso total de dinero en nuevo soles por bus: S/" << sumPrecio << endl;

	cout << "Ingreso total de dolares por avion: $" << sumPrecioS << endl;

	cout << "Ingreso total en Nuevos Soles: S/" << sumMont << endl;



	_getch();

}