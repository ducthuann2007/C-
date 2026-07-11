#include <iostream>

using namespace std;

void menu()
{
	cout << "Chao mung ban den voi anh trai say gex"<<endl;
	cout<< "1.Lua chon 1(de tinh tong)"<<endl;
	cout <<"2.Lua chon 2(de tinh tich)"<<endl;
	cout <<"0.Thoat"<<endl;
	cout << "Hay nhap lua chon cua ban: ";
}
void menu1()
{
	cout << "Chao mung ban den voi chuong trinh tinh tong cua anh trai say gex"<<endl;
	cout << "1.Tiep tuc tinh tong"<<endl;
	cout << "2.Quay lai menu chinh"<<endl;
	cout << "0.Thoat"<<endl;
	cout << "Hay nhap lua chon cua ban: ";
}
void menu2()
{
	cout << "Chao mung ban den voi chuong trinh tinh tich cua anh trai say gex"<<endl;
	cout << "1.Tiep tuc tinh tich"<<endl;
	cout << "2.Quay lai menu chinh"<<endl;
	cout << "0.Thoat"<<endl;
	cout << "Hay nhap lua chon cua ban: ";
}
int tong(int n)
{
	int t = 0;
	for (int i =1; i <=n; i++)
	t += i;
	return t;
}
int tich(int n)
{
	int tic = 0;
	for (int i =1; i <= n; i++)
	tic *=i;
	return tic;
}
void hamchinh()
{
	
}
