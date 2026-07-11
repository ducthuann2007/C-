#include <iostream>
#include <string>
using namespace std;
void them1Traicay (string tenTraicay[], double SL[], int Gia[], int &n)
{
	string tenmoi;
	double SLmoi;
	int Giamoi;
	do
	{
		cout <<"Hay nhap vao ten trai cay ban muon them: ";
		cin.ignore();
		getline(cin, tenmoi);
		cout <<"Nhap can nang: ";
		cin >> SLmoi;
		cout <<"Nhap gia: ";
		cin >> Giamoi;
		if (SLmoi <= 0 || Giamoi <= 0)
		cout << "Nhap sai yeu cau\n";
	}while (SLmoi <= 0 || Giamoi <= 0);
	tenTraicay[n] = tenmoi;
	SL[n] = SLmoi;
	Gia[n] = Giamoi;
	n++;
}
void timkiem(string tenTraicay[], double SL[], int Gia[], int &n)
{
	string tencantim;
	bool timthay = false;
	cout <<"Hay nhap ten trai cay ban muon tim: ";
	cin.ignore();
	getline (cin, tencantim);
	for (int i = 0; i <= n; i++)
	{
		if (tenTraicay[i] == tencantim)
		{
			cout <<"Da tim thay\n";
			cout <<"Ten thuc pham: "<<tenTraicay[i]<<endl;
			cout <<"SL: "<<SL[i]<<endl;
			cout <<"Gia: "<<Gia[i]<<endl;
			timthay = true;
			break;
		}
	}
	if (!timthay)
	cout <<"Khong tim thay!\n";
}
int main()
{
	int n = 5;
	string tenTraicay[1000] = {"Tao", "Chuoi", "Cam", "Xoai", "Dua hau"};
	double SL[1000] = {6.5, 8.2, 5.4, 7.1, 10.0};
	int Gia[1000] = {30000, 20000, 35000, 40000, 18000};
	them1Traicay(tenTraicay, SL, Gia, n);
	timkiem(tenTraicay, SL, Gia, n);
	return 0; 
}
