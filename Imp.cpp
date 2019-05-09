#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int n;

	printf("Ingrese n:");
	cin >> n;


	for (int j = 0; j <= n-1; j++)
	{
		for (int i = 0; i < j + 1; i++)
		{
			cout << i + 1 << " ";
		}
		cout << endl;
	}

	
	//Salida
	_getch();
}