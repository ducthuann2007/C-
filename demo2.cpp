#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int MAX = 100;
void khoitaomang (int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i ++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % (191) + 10;
		}
	}
}
void inmang (int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i ++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void timkiemmax (int a[MAX][MAX], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		int max = a[i][0];
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		cout << "So lon nhat cua dong " << i << " la: " << max <<endl;
	}
}
void timkiemmin (int a[MAX][MAX], int r, int c)
{
	for (int j = 0; j < c; j++)
	{
		int min = a[0][j];
		for (int i = 0; i < r; i++)
		{
			if ( a[i][j] < min)
			{
				min = a[i][j];
			}
		}
		cout << "So nho nhat cua cot " << j << " la: " << min <<endl;
	}
}
int main()
{
	srand(time(NULL));
	int r, c;
	int a[MAX][MAX];
	do
	{
		cout <<"Hay nhap so dong: ";
		cin >> r;
		cout <<"Hay nhap so cot: ";
		cin >> c;
		if (r < 0 || c < 0)
		cout << "Loi! Hay nhap lai\n";
	}while (r < 0 || c < 0);
	khoitaomang(a, r, c);
	inmang(a, r, c);
	timkiemmax(a, r, c);
	timkiemmin(a, r, c);
	return 0;
}
