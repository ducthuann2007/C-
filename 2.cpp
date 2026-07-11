#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	char a[51];
	cout << "Nhap chuoi: " ;
	cin.getline(a, 50, '\n');
	char* p = a;
	*p = toupper(*p);
	p=&a[1];
	do
	{
		*p = toupper(*p);
		if(!(*(p-1)==' '))
			*p = tolower(*p);
			
		p++;
	}while (*p);
	cout << a << endl;
	return 0;
}
