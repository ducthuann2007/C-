#include <iostream>
using namespace std;

int main()
{
	float n;
	cin >> n;
	int songuyen = n;
	double sothapphan = n - songuyen;
	if (n >= 0)
	{
		if (sothapphan >= 0.5)
		{
			cout << songuyen++;
		}
		else
		{
			cout << songuyen;
		}
	}
	else 
	{
		if (sothapphan >= 0.5)
		{
			cout << songuyen--;
		}
		else
		{
			cout << songuyen;
		}
	}
	return 0;
}
