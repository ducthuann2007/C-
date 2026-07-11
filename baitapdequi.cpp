#include <iostream>
using namespace std;

int tinhtong(int n)
{
	if (n == 1)
		return 1;
	return (n * n) + tinhtong(n - 1);
}
int demso(int n)
{
	if(n < 10)
		return 1;
	return 1 + demso(n / 10);
}
int nhiphan(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return nhiphan(n / 2) * 10 + (n % 2);
}
int sodaonguoc(int n, int sdn = 0)
{
	if (n == 0)
		return sdn;
	return sodaonguoc(n / 10, sdn * 10 + n % 10);
}
int main()
{
	int n;
	cin >> n;
	cout << tinhtong(n) << endl;
	cout << demso(n) << endl;
	cout << nhiphan(n) << endl;
	cout << sodaonguoc(n) << endl;
	return 0;
}
