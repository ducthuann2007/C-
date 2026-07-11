#include <iostream>
using namespace std;

bool doixung(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c / 2; j++)
		{
			if (a[i][j] != a[i][c - 1 -j])
				return false;
		}
	}
	return true;
}

int main()
{
	int r, c;
	cin >> r >> c;
	int **a;
	a = new int*  [r];
	for (int i  = 0; i < r; i++)
	{
		a[i] = new int [c];
	}
	for (int i = 0; i < r; i++)
	{
		cout << "Nhap " << c << " gia tri vao cho dong thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	if(doixung (a, r, c))
	{
		cout << "Mang doi xung theo hang ngang \n";
	}
	else
		cout << "Mang khong doi xung theo hang ngang\n";
	for (int i = 0; i < r; i++)
	{
		delete [] a[i];
	}
	delete []a;
	a = NULL;
	return 0;
}
