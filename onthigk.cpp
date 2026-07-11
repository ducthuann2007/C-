#include <iostream>
using namespace std;

void khoitaongaunhien(int x, int y)
{
	int x, y;
	cin >> x >> y;
	int num = rand % ((y - x + 1) + x);
	cout << num; 
}

int main()
{
	srand(time(0));
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int* a = new int [n];
	
	delete []a;
	a = 0;
	
}
