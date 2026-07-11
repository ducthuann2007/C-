#include <iostream>
#include <fstream>
using namespace std;

ofstream fout;

int main()
{
	string hoten = "Nguyen Duc Thuan";
	int namsinh = 2007;
	fout.open("Data.txt"); //dung ios::out
	if (fout.is_open())
	{
		fout << hoten << ", " << namsinh << endl;
		fout.close();
	}
	else
		cout << "Mo file that bai\n";
	return 0;
}
