#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;

void tonghc(int soHC[][MAX], int hang, int &cot)
{
	for (int i = 0; i < hang; i++)
	{
		int tong = 0;
		for (int j = 0; j < cot; j++)
		{
			tong += soHC[i][j];
			soHC[i][3] = tong;
		}
	}
	cot++;
}
void xuatmang(string tenQG[], int soHC[][MAX], int hang, int cot)
{
	for (int i = 0; i < hang; i++)
	{
		cout << tenQG[i] << "\t";
		for (int j = 0; j < cot; j++)
		{
			cout << soHC[i][j] << "\t";
		}
		cout << endl;
	}
}
void hcvnhieunhat(string tenQG[], int soHC[][MAX], int hang)
{
	int maxhcv = soHC[0][0];
	for (int i = 1; i < hang; i++)
	{
		if (soHC[i][0] > maxhcv)
		{
			maxhcv = soHC[i][0];
		}
	}
	cout << "So qg co huy chuong vang nhieu nhat: ";
	for (int i = 0; i < hang; i++)
	{
		if (soHC[i][0] == maxhcv)
		{
			cout << tenQG[i] << endl;
		}
	}
	cout << "So huy chuong vang nhieu nhat: " << maxhcv << endl;
}
void sxGiamdan(string tenQG[], int soHC[][MAX], int hang, int cot)
{
	int soQG = hang;
	while (soQG > 0)
	{
		int lonnhat = soHC[0][3];
		int vt = 0;
		for (int i = 1; i < hang; i++)
		{
			if (soHC[i][3] > lonnhat)
			{
				lonnhat = soHC[i][3];
				vt = i;
			}
		}
		cout << tenQG[vt] << ", ";
		// tiep theo la an quoc gia vua tim duoc
		soHC[vt][3] = INT_MIN;
		soQG--;
	}
}
int main()
{
	string tenQG[MAX] = {
	"phap", "nhat", "hoa ky", "duc", "y", "uc", "ha lan", "trung quoc", "anh", "han quoc"
};
int soHC[MAX][MAX] = {
	{16, 26, 22},
	{20, 12, 13},
	{40, 44, 42},
	{12, 13, 8},
	{12, 13, 15},
	{18, 19, 16},
	{15, 7 , 12},
	{40, 27, 24},
	{14, 22, 29},
	{13, 9, 10}
};
int hang = 10;
int cot = 3;
tonghc(soHC, hang, cot);
xuatmang(tenQG, soHC, hang, cot);
hcvnhieunhat(tenQG, soHC, hang);
sxGiamdan(tenQG, soHC, hang, cot);
return 0;
}
