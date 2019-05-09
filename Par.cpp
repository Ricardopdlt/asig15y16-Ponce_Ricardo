#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int n;

	printf("Ingrese n: ");
	cin >> n;

	cout << endl;
	for (int j = n - 1; j >= 0; j--)
	{
		for (int i = 0; i < j + 1; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}







	_getch();
}