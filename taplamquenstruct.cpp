#include <iostream>
#include <string>
using namespace std;
struct Nhanvien
{
	string manv;
	string hoten;
	int namsinh;
	string chucvu;
	double bacluong;
};
void nhapNV(Nhanvien& nv)
{
	cout << "Nhap ma so nhan vien: ";
	getline(cin, nv.manv);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, nv.hoten);
	cout << "Nhap nam sinh cua nhan vien: ";
	cin >> nv.namsinh;
	cin.ignore();
	cout << "Nhap chuc vu cua nhan vien: ";
	getline(cin, nv.chucvu);
	cout << "Nhap bac luong cua nhan vien: ";
	cin >> nv.bacluong;
	cin.ignore();
}
void xuatNV(Nhanvien nv)
{
	cout << nv.manv << " | " << nv.hoten << " | " << nv.namsinh << " | " 
	<< nv.chucvu << " | " << nv.bacluong << endl;
}
int main()
{
	Nhanvien nv1, nv2;
	nhapNV(nv1);
	nhapNV(nv2);
	cout << "Nhan vien 1: ";
	xuatNV(nv1);
	cout << "Nhan vien 2: ";
	xuatNV(nv2);
	return 0;
	//getline dung khi gap '\n',
	//cin cung vay
	//sau cin phai co cin.ignore() khi ma cin nam truoc getline;
}
