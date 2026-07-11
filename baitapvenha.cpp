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
	int n, m;
	int a[100][100];
	cout << "Hay nhap so hang ma ban muon: ";
	cin >> n;
	cout << "Hay nhap so cot ma ban muon: ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
		for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a["<< i << "]["<<j<<"] = "<<a[i][j]<<" "<<endl;
		}
	}
	return 0;
}
