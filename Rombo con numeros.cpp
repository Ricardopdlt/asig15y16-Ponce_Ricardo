#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	int n;
	cin >> a;
	//cin >> a;
	for (int i = 1; i <= a; i++)
	{
		n = a;
		for (int j = 1; j <= a; j++)
		{
			if (i >= j)
			{
			cout << n << " ";
			n--;
			}
			else
			{
			cout << "  ";
			}
		}
		n = 1;
		for (int j = 2; j <= a; j++)
		{
			n++;
			if (a-i < j)
			{
				cout << n << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		n = a;
		cout << endl;
	}
	//----------------mitad
	for (int i = 1; i <= a; i++)
	{
		n = a;
		for (int j = 1; j <= a; j++)
		{
			if (i <= a-j)
			{
				cout << n << " ";
				n--;
			}
			else
			{
				cout << "  ";
			}
		}
		n = 1;
		for (int j = 2; j <= a; j++)
		{
			n++;
			if (a-i > a-j)
			{
				cout << n << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		n = a;
		cout << endl;
	}
	_getch();
}
