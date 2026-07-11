#include <iostream>
using namespace std;

int main()
{
	int a[100][1000];
	int n;
	do 
	{
		cin >> n;
		if (n < 0)
		cout << "Loi!Nhap lai"<<endl;
    }while ( n < 0);
		for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for  (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Day la ma tran chuyen vi \n";
	for  (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
