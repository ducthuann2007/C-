#include <iostream>
#include <string>
using namespace std;
const int MAX = 60;

struct NTN
{
	int ngay, thang, nam;
};

struct Sanpham
{
	string masp;
	string tensp;
	double dongia;
	int SLtonkho;
	NTN ngaysx;
};

void nhapSP(Sanpham& sp)
{
	cout << "Nhap ma san pham: ";
	getline(cin, sp.masp);
	cout << "Nhap ten san pham: ";
	getline(cin, sp.tensp);
	cout << "Nhap don gia: ";
	cin >> sp.dongia;
	cout << "Nhap so luong: ";
	cin >> sp.SLtonkho;
	cout << "Nhap ngay san xuat: ";
	cin >> sp.ngaysx.ngay >> sp.ngaysx.thang >> sp.ngaysx.nam ;
	cin.ignore();
}
void nhapCH(Sanpham* cuaHang, int n)
{
	for (int i = 0; i < n; i++)
		nhapSP(cuaHang[i]);
}
void xuatSP(Sanpham sp)
{
	cout << sp.masp << " | " << sp.tensp << " | " << sp.dongia << " | " << sp.SLtonkho << " | " << 
		sp.ngaysx.ngay << " | " << sp.ngaysx.thang << " | " << sp.ngaysx.nam;
}
void xuatCH(Sanpham* cuaHang, int n)
{
	for (int i = 0; i < n; i++)
		xuatSP(cuaHang[i]);
}
void timkiem(Sanpham* cuaHang, int n)
{
	string s;
	cout << "Nhap chuoi bat ky: ";
	getline(cin, s);
	bool timthay = false;
	for (int i = 0; i < n; i++)
	{
		if (cuaHang[i].tensp.find(s) != string::npos)
		{
			xuatSP(cuaHang[i]);
			timthay = true;
		}
	}
	if (!timthay)
	{
		cout << "Khong tim thay san pham" << endl;
	}
}
void xoaSP(Sanpham* cuaHang, int n)
{
	string ma;
	int vt = -1;
	cout << "Nhap ma can xoa" ;
	getline(cin, ma);
	for (int i = 0; i < n; i++)
	{
		if (cuaHang[i].masp == ma)
		{
			vt = i; 
			break;
		}
	}
	if (vt != -1)
	{
		for (int i = vt; i < n - 1; i++)
		{
			cuaHang[i] = cuaHang[i + 1];
			n--;
		}
	}
}
void sapxep(Sanpham* cuaHang, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (cuaHang[j].dongia < cuaHang[i].dongia)
				swap(cuaHang[j].dongia, cuaHang[i].dongia);
		}
	}
}
//Cach 2 cua sapxep la
// void swap(Sanpham& s1, Sanpham& s2) phai co tham chieu va khoi bien int tmp;

int main()
{
	Sanpham sp;
	int n;
	do
	{
		cout << "Nhap so luong san pham: ";
		cin >> n;
		cin.ignore();
		if (n <= 0 || n > 60)
			cout << "Loi!Vui long nhap lai";
	}while(n <= 0 || n > 60);
	Sanpham* cuaHang = new Sanpham[n];
	
	nhapCH(cuaHang, n);
	xuatCH(cuaHang, n);
	timkiem(cuaHang, n);
	xoaSP(cuaHang, n);
	
	delete[] cuaHang;
	cuaHang = 0;
	return 0;
}
