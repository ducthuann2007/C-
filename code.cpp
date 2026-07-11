#include<iostream>
#include<string>
using namespace std;
void them1sach(string tensach[], int SL[], int Gia[], int &n)
{
	string tensachmoi;
	int SLmoi; //SL cua sach moi
	int Giamoi; // Gia cua sach moi
	do
	{
		cout <<"Hay nhap ten sach ban muon them: ";
		getline(cin, tensachmoi);
		cout <<"Nhap so luong sach: ";
		cin >> SLmoi;
		cout <<"Nhap gia: ";
		cin >> Giamoi;
		cin.ignore();
		if (SLmoi <= 0 || Giamoi <= 0)
		cout <<"Nhap sai yeu cau\n";
	}while(SLmoi <= 0 || Giamoi <= 0);
	tensach[n] = tensachmoi;
	SL[n] = SLmoi;
	Gia[n] = Giamoi;
	n++;
}
void timsach(string tensach[], int SL[], int Gia[], int &n)
{
	string sachmuontim;
	bool timthay = false;
	cout <<"Hay nhap ten sach ban muon tim: ";
	getline(cin, sachmuontim);
	for (int i = 0; i < n; i++)
	{
		if (tensach[i] == sachmuontim)
		{
			cout <<"Da tim thay\n";
			cout <<"Ten sach la: "<<tensach[i]<<endl;
			cout <<"So luong: "<<SL[i]<<endl;
			cout <<"Gia: "<<Gia[i]<<endl;
			timthay = true;
			break;
		}
	}
	if (!timthay)
	cout <<"Khong tim thay\n";
}
int tinhSLTB(int SL[], int &n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += SL[i];
	}
	return tong / n;
}
void SLmin (string tensach[], int SL[], int &n)
{
	int Min = SL[0];
	int vt = 0;
	for (int i = 1; i < n; i++)
	{
		if (SL[i] < Min)
		{
			Min = SL[i];
			vt = i;
		}
	}
	cout << "Sach co so luong nho nhat la: "<<tensach[vt]<<endl;
	cout << "So luong: "<<Min<<endl;
}
void in2GiaCN(string tensach[], int Gia[], int &n)
{
	int Giatam[1000];
	for (int i = 0; i < n; i++)
	{
		Giatam[i] = Gia[i];
	}
	for (int i = 1; i <= 2; i++)
	{
		int Giamax = -1;
		int vtmax = -1;
		for (int j = 0; j < n; j++)
		{
			if (Giatam[j] > Giamax)
			{
				Giamax = Giatam[j];
				vtmax = j;
			}
		}
		if (vtmax != -1)
		{
			cout <<"Sach co gia thu "<<i<<" co ten: "<<tensach[vtmax]<<", co gia: "<<Giamax<<endl;
			Giatam[vtmax]--;
		}
	}
}
int main()
{
	int n = 5;
	string tensach[1000] = {"Toan", "Ly", "Hoa", "Sinh", "Tin"};
	int SL[1000] = {10, 8, 12, 6, 15};
	int Gia[1000] = {25000, 30000, 28000, 26000, 20000};
	them1sach(tensach, SL, Gia, n);
	timsach(tensach, SL, Gia, n);
	cout << "So luong sach trung binh la: "<<tinhSLTB(SL, n)<<endl;
	SLmin(tensach, SL, n);
	return 0;
}
