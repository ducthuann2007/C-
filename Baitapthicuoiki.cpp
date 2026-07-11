#include <iostream>
#include <string>
using namespace std;
void themTP (string tenTP[], double KLton[], int Gia[], int &n)
{
	string tenmoi;
	double KLmoi;
	int Giamoi;
	do
	{
	    cout << "Hay nhap ten 1 thuc pham moi: ";
	    getline(cin, tenmoi);
	    cout <<"Nhap khoi luong: ";
	    cin >> KLmoi;
	    cout <<"Nhap gia: ";
	    cin >> Giamoi;
	    cin.ignore();
	    if (KLmoi <= 0 || Giamoi <= 0)
	    cout << "Nhap sai yeu cau\n";
    }while (KLmoi <= 0 || Giamoi <= 0);
    tenTP[n] = tenmoi;
    KLton[n] = KLmoi;
    Gia[n] = Giamoi;
    n++;
}
void timkiem(string tenTP[], double KLton[], int Gia[], int &n)
{
	string tencantim;
	bool timthay = false;
	cout << "Hay nhap ten TP ban muon tim: ";
	getline (cin, tencantim);
	for (int i = 0; i < n; i++)
	{
		if ( tenTP[i] == tencantim)
		{
			cout <<"Da tim thay\n";
			cout <<"Ten thuc pham la: "<<tenTP[i]<<endl;
			cout <<"Khoi luong con: "<<KLton[i]<<endl;
			cout <<"Gia: "<<Gia[i]<<endl;
			timthay = true;
			break;
		}
	}
	if (!timthay)
	cout << "Khong tim thay san pham nay\n";
}
double KLtb (double KLton[], int &n)
{
	int tong = 0;
	for (int i  = 0; i < n; i++)
	{
		tong += KLton[i];
	}
	return tong / n;
}
void timKLMax (string tenTP[], double KLton[], int &n)
{
	double KLMax = KLton[0];
	int vtmax = 0;
	for (int i = 1; i < n; i++)
	{
		if (KLton [i] > KLMax)
		{
			KLMax = KLton[i];
			vtmax = i;
		}
	}
	cout << "Thuc pham co can nang lon nhat ten: "<<tenTP[vtmax]<<endl;
	cout << "Co khoi luong la: "<<KLMax<<endl;
}
int timGiaMin (int Gia[], int &n)
{
	int Min = Gia[0];
	for (int i = 1; i < n; i++)
	{
		if (Gia[i] < Min)
		Min = Gia[i];
	}
	return Min;
}
int TimgiaMax (int Gia[], int &n)
{
	int Giamax = Gia[0];
	for (int i = 1; i < n; i++)
	{
		if (Gia [i] > Giamax)
		Giamax = Gia[i];
	}
	return Giamax;
}
void in3GiaCN(string tenTP[], int Gia[],int &n )
{
	int giatam[1000];
	for (int i = 0; i < n; i++)
	{
		giatam[i] = Gia[i];
	}
	for (int i = 1; i <= 3; i++)
	{
		int Giamaxht = -1;
		int vtmax = -1;
		for (int j = 0; j < n; j++)
		{
			if (giatam[i] > Giamaxht)
			{
				Giamaxht = giatam[i];
				vtmax = i;
			}
		}
		if (vtmax != -1)
		{
			cout <<"Thuc pham co gia cao thu "<<i<<" co ten "<<tenTP[vtmax] <<", co gia "<<Giamaxht<<endl;
			giatam[vtmax] = -1;
		}
	}
}
int main()
{
	int n = 5;
	string tenTP[1000]= {"Heo", "Ga", "Bo", "Ca", "Rau cu"};
	double KLton[1000]={7.8, 5.6, 6.2, 3.1, 4.5};
	int Gia[1000]= {112000, 84000, 250000, 90000, 35000};
	themTP(tenTP, KLton, Gia, n);
	timkiem(tenTP, KLton, Gia, n);
	cout << "Trung binh KL ton la: "<<KLtb(KLton, n)<<endl;
	timKLMax(tenTP, KLton, n);
	cout <<"Gia thap nhat trong tat ca loai TP la: "<<timGiaMin(Gia, n)<<endl;
	in3GiaCN(tenTP, Gia, n);
	return 0;
}
