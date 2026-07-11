#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream doc;
ofstream ghi;
struct Sach
{
	string tensach, tentg;
	int sotrang, gia;
}
void docFile(Sach tv[], int& sl)
{
	doc.open("Sach.txt");
	if (doc.is_open()){
		while(!doc.eof())
		{
			Sach s;
			getline(doc, s.tensach, ',');
			getline(doc, s.tentg, ',');
			doc >> s.sotrang;
			doc.ignore();
			doc >> s.gia;
			doc.ignore();
			tv[sl] = s;
			sl++;
		}
		doc.close();
	}
	else{
		cout << "Khong mo duoc file\n";
	}
}
void xuatTV(Sach tv[], int sl)
{
	for (int i = 0; i < sl; i++)
	{
		cout << "Ten sach: " << tv[i].tensach << endl;
		cout << "Ten tac gia: " << tv[i].tentg << endl;
		cout << "So trang: " << tv[i].sotrang << endl;
		cout << "Gia: " << tv[i].gia << endl;
	}
}
void ghiFile(Sach tv[], int sl)
{
	ghi.open("Sach.txt");
	if(ghi.is_open())
	{
		for (int i = 0; i < sl; i++)
		{
			
		}
	}
}
int main()
{
	Sach tv[100];
	int sl = 0;
	docFile(tv, sl);
	cout << s1 << endl;
}
