#include <iostream>
using namespace std;
const int MAXROWS = 20;
const int MAXCOLUMNS = 10;

int main()
{
	int d;
	int c;
	int a[MAXROWS][MAXCOLUMNS];
	do
	{
		cout << "Nhap so dong: ";
		cin >> d;
		cout << "Nhap so cot: ";
		cin >> c;
		if (d <= 0 || c <= 0 || d > 20 || c > 10)
		cout << "Loi! Nhap lai\n";
	}while(d <= 0 || c <= 0 || d > 20 || c > 10);
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >>a[i][j];
		}
	}
	double sum = 0;
	double tb;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum += a[i][j];
		}
	}
	int dong;
	int tich = 1;
	do{
		cout <<"Nhap dong ban muon tinh tich: ";
		cin >> dong;
		if (dong < 0 || dong >= d)
		cout <<"Loi! Nhap lai\n";
	}while(dong < 0 || dong >= d);
	for (int j = 0; j < c; j++)
	{
		tich *= [dong][j];
	}
	tb = sum / (d * c);
	cout <<"Trung binh cac phan tu la: "<<tb<<endl;
	cout <<"Tich cac phan tu tai "<<dong<<" la: "<<tich<<endl;
	return 0;
}
