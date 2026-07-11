#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[100][100];
	do
	{
		cin >> n;
		if ( n < 2 || n > 10)
		cout <<"Loi! Nhap lai\n";
	}while(n <= 2 || n >= 10);
    int dem = 1;
    for (int j = 0; j < n; j++)
    {
    	if (j % 2 == 0)
    	for (int i = 0; i < n; i++)
    	{
    		a[i][j] = dem++;
		}
		else 
		{
			for (int i = n - 1; i >= 0; i--)
			{
				a[i][j] = dem++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] <<"\t";
		}
		cout << endl;
	}
	return 0;
}
