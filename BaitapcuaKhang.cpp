#include <iostream>
using namespace std;

int ktrasochan(int x, int y)
{
	if(x == y)
	{
		if(y % 2 == 0)
			return 1;
		else
			return 0;
	}
	if(x % 2 == 0)
		return 1 + ktrasochan(x + 1, y);
	else
		return ktrasochan(x + 1, y);
}
//cau 2
int bangcuuchuong(int n, int i = 1)
{
	if(i == 10)
		return n*10;
	cout << n << " * " << i << " = " << n*i << endl;
	if (i == 9)
		cout << n << " * " << 10 << " = " ;
	return bangcuuchuong(n, i + 1);
}
//cau 3
char hangngang(int i)
{
	if (i == 1)
		return '*'; 
	cout << '*';
	return hangngang(i - 1);
}
char tamgiac(int n, int i = 1)
{
	if(i > n)
		return '\0';
	cout << hangngang(i);
	cout << endl;
	return tamgiac(n, i + 1);
}
int main()
{
	int n;
	//int x, y;
	//cout << "Moi nhap tu x -> y ";
	//cin >> x >> y;
	//cout << ktrasochan(x, y);
	cout << "Nhap 1 so nguyen: ";
	cin >> n;
	//cout << bangcuuchuong(n);
	cout << tamgiac(n);
	
	return 0;
}
