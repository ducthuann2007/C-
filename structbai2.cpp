#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int MAX = 45;
struct Sinhvien
{
	string mssv;
	string hoTen;
	int namsinh;
	double diemToan;
	double diemVan;
	double diemNn;
};
void Nhapttsv(Sinhvien &sv)
{
	cout << "Nhap ma so sinh vien: ";
	getline(cin, sv.mssv);
	cout << "Nhap ho ten sinh vien: ";
	getline(cin, sv.hoTen);
	cout << "Nhap nam sinh: ";
	cin >> sv.namsinh;
	cout << "Nhap diem Toan: ";
	cin >> sv.diemToan;
	cout << "Nhap diem Van: ";
	cin >> sv.diemVan;
	cout << "Nhap diem Ngoai ngu: ";
	cin >> sv.diemNn;
	cin.ignore();
}
void nhapLop(Sinhvien ss[], int n)
{
	for (int i = 0; i < n; i++)
		Nhapttsv(ss[i]);
}
double DTB(Sinhvien sv)
{
	return ((sv.diemVan + sv.diemToan) * 2 + sv.diemNn / 5);
}
int main()
{
	Sinhvien nv1;
	int n;
	Sinhvien ss[MAX];	
	do
	{
		cout << "Nhap si so: ";
		cin >> n;
		if (n <= 0 || n >45)
			cout << "Loi! Vui long nhap lai" <<endl;
	}while(n <= 0 || n >45);
	Nhapttsv(nv1);
	nhapLop(ss, n);
	return 0;
}
