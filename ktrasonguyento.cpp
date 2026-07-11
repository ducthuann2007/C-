#include <iostream>
using namespace std;
void menu()
{
	cout <<"chao mung ban toi ctr"<<endl;
	cout << "1.ktra so ngto"<<endl;
	cout <<"0.thoat "<<endl;
	cout << "nhap lua chon cua ban:";
}
void ktra(int a)
{
	bool k=0;
	if(a==1 ||a==4)
	k=1;
	for(int i=2;i<sqrt(a) && k==0;i++)
	{
		if(a%i==0)
		{
			k=1;
		}
	}
	if (k)
	cout<< "ko p so nguyen to"<<endl;
	else
	cout << "la so nguyen"<<endl;
}
void hamchinh(){
	while(true){
	    menu();
	    int lc;
	    cin >>lc;
	    if (lc==0)
	    {
	    	cout << "thoat ctr"<<endl;
	    	break;
	    }
	    else if(lc==1)
	    while (true)
	    {
	    	int a;
	    	cout<<" nhap so, nhap 0 de thoat:";cin >> a;
	    	if(a==0)
	    	{
			    cout<< "thoat"<<endl;
			    break;
			}
			else
			ktra(a);
		}
    }
}
int main()
{
	hamchinh();
	return 0;
}

