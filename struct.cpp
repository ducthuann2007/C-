#include <iostream>
using namespace std;

struct Phanso
{
	int sotu;
	int somau;
};
void Nhapps(Phanso &p)
{
	cout << "Nhap tu: ";
	cin >> p.sotu;
	cout << "Nhap mau: ";
	do{
		cin>>p.somau;
		if(p.somau==0){
			cout<<"nhap lai: ";}
		else
			break;	
	}while(p.somau == 0);
}

void Xuatps(Phanso p)
{
	cout << p.sotu << "/" << p.somau << endl;
}
Phanso cong(Phanso p1, Phanso p2)
{
	Phanso kq;
	kq.sotu=p1.sotu*p2.somau + p1.somau * p2.sotu;
	kq.somau = p1.somau * p2.somau;
	return kq;
}
Phanso hieu(Phanso p1, Phanso p2)
{
	Phanso kq;
	kq.sotu=p1.sotu*p2.somau - p1.somau * p2.sotu;
	kq.somau = p1.somau * p2.somau;
	return kq;
}
Phanso thuong()
Phanso rutgon(Phanso p)
{
	int u = ucln(p.sotu, p.sotu);
	Phanso kq;
	kq.sotu = p.sotu / u;
	kq.somau = p.somau / u;
	return kq;
}
int main()
{
	Phanso p1, p2, p3;
	Nhapps(p1); 
	Nhapps(p2);
	p3 = cong(p1, p2);
	p3 = rutgon(p3);
	cout << "Tong phan so la: ";  Xuatps(p3);
	p3 = hieu(p1, p2);
	cout << "Hieu cua 2 phan so la: ";
	Xuatps(p3);
	return 0;
}
