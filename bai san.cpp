#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <typeinfo>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	do
	{
		cout <<"Hay nhap chieu cao cua tam giac: ";
		cin >> n;
		if (n < 0)
		cout << "Loi! Vui long nhap lai\n";
	}while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j<= i; j++)
		{
			if (i == n || j == 1 || j == i)
			cout << "* ";
			else
			cout << "  ";
		}
		cout << endl;
	}
	return 0; 
}


