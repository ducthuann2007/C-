#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double n;
	cin >> n;
	int songuyen = n;
	double sothapphan = n - songuyen;
	if (sothapphan >= 0.5)
	{
		songuyen++;
		cout << songuyen;
	}
	if (n >= 0 || n < 0)
	{
		if (sothapphan >= 0.5)
		{
			cout << setprecision(0) << fixed << n;
		}
		else
		{
			cout << setprecision(0) << fixed << n;
		}
	}
	return 0;
}
