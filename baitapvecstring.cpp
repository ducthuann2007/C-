#include <iostream>
#include <cstring>


using namespace std;

void chuyenChuThuong(char s[]) {
int len = strlen(s);
for (int i = 0; i < len; i++) {
s[i] = tolower(s[i]);
}
}

int main() {
char hoTen[100];
char mssv[20];

cout << "Nhap ho va ten sinh vien: ";
cin.getline(hoTen, 100);

cout << "Nhap ma so sinh vien: ";
cin >> mssv;

chuyenChuThuong(hoTen);
chuyenChuThuong(mssv);

char tu[3][20];
int soLuongTu = 0;

char* token = strtok(hoTen, " ");
while (token != NULL && soLuongTu < 3) {
strcpy(tu[soLuongTu], token);
soLuongTu++;
token = strtok(NULL, " ");
}

if (soLuongTu < 3) {
cout << "Vui long nhap day du Ho, Ten lot va Ten!" << endl;
return 0;
}

char email1[100] = "";
strcat(email1, mssv);
strcat(email1, tu[2]);
strcat(email1, "@ou.edu.vn");

char email2[100] = "";
strcat(email2, tu[2]);
strcat(email2, ".");

char chuoiTam[2];
chuoiTam[1] = '\0';

chuoiTam[0] = tu[0][0];
strcat(email2, chuoiTam);

chuoiTam[0] = tu[1][0];
strcat(email2, chuoiTam);

strcat(email2, "@gmail.com");

cout << "Email 1: " << email1 << endl;
cout << "Email 2: " << email2 << endl;

system("pause");
return 0;
}
