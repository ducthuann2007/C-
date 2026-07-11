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
	double pi = 3.14;
	double r;
	cout <<"Hay nhap ban kinh: ";
	cin >> r;
	cout <<"Chu vi hinh tron la: "<<fixed<<setprecision(3)<<2*pi*r<<endl;
	cout <<"Dien tich hinh tron la: "<<fixed<<setprecision(3)<<pi*pow(r,2)<<endl;
	return 0;
}
