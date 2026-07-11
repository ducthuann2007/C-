#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* p;
	p = &x;
	//In ra gia tri va dia chi cua bien x
	cout << "Gia tri cua bien x la: " << x << endl;
	cout << "Dia chi cua bien x la: " << &x << endl;
	//In ra gia tri va dia chi cua con tro p
	cout << "Gia tri cua p la: " << p << endl;
	cout << "Dia chi cua p la: " << &p << endl;
	//Ta se thay duoc gia tri cua p = dia chi cua bien x
	// Ta cung co the lay duoc gia tri cua bien x khi su dung *p
	cout << "Gia tri cua bien x thong qua con tro p: " << *p << endl;
	return 0;
}
