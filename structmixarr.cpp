#include <iostream>
#include <string>
using namespace std;
struct Nhanvien
{
	string hoTen;
	int tuoi;
};
void nhapNV(Nhanvien &nv)
{
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, nv.hoten);
	cout << "Nhap tuoi cua nhan vien: ";
	cin >> nv.tuoi;
	cin.ignore();
}
void xuatNV(Nhanvien nv)
{
	cout << nv.hoTen << " | " << nv.tuoi << endl;
}
int main()
{
	Nhanvien nv1;
	Nhanvien cTy[10];
	for (int i = 0; i < 10; i++)
	{
		nhapNV(cty[i]);
	}
	//cach for khac
	// for (Nhanvien nv : cTy)
	//		nhapNV(nv);
	for (Nhanvien nv : cTY)
		xuatNV(nv);
	return 0;
}
