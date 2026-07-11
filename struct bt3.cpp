#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
const int MAX = 45;

struct SinhVien
{
	string maSV;
	string hoTen;
	int namSinh;
	double diemToan;
	double diemVan;
	double diemNgoaiNgu;
};

void nhapSV(SinhVien& sv)
{
	cout << "Nhap ma nhan vien: ";
	getline(cin, sv.maSV);
	cout << "Nhap ho ten nv: ";
	getline(cin, sv.hoTen);
	cout << "Nhap nam sinh: ";
	cin >> sv.namSinh;
	cin.ignore();
	cout << "Nhap diem toan: ";
	cin >> sv.diemToan;
	cin.ignore();
	cout << "Nhap diem van: ";
	cin >> sv.diemVan;
	cin.ignore();
	cout << " Nhap diem ngoai ngu: ";
	cin >> sv.diemNgoaiNgu;
	cin.ignore();
}

void nhapLop(SinhVien siSo[], int n)
{
	for (int i = 0; i < n; i++)
	{
		nhapSV(siSo[i]);
	}
}

double tinhDiemTB(SinhVien sv)
{
	return ((sv.diemToan + sv.diemVan) * 2 + sv.diemNgoaiNgu) / 5;
}

string xepLoai(SinhVien  sv)
{
	double dtb = tinhDiemTB(sv);
	if (dtb >= 8)
		return "Gioi";
	if (dtb >= 6.5)
		return "Kha";
	if (dtb >= 5)
		return "TB";
	return "Duoi TB";
}

void xuatSV(SinhVien sv)
{
	cout << sv.maSV << " | " << sv.hoTen << " | "
		<< sv.namSinh << endl;
	cout << "Diem trung binh: " << tinhDiemTB(sv) << endl;
	cout << "Xep loai: " << xepLoai(sv) << endl;
}

void xuatLop(SinhVien siSo[], int n)
{
	for (int i = 0; i < n; i++)
		xuatSV(siSo[i]);
}


int main()
{
	SinhVien siSo[MAX];
	int n;
	cout << "Nhap so luong sinh vien toi da trong lop(45): ";
	cin >> n;
	cin.ignore();
	nhapLop(siSo, n);
	xuatLop(siSo, n);
	return 0;
}