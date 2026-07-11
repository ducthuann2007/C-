#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int nhaph()
{
	int d,c;
	do{
		cout<<"nhap so dong:";cin>>d;
		if(d<0)
		cout<<"loi moi nhap lai\n";
	}while(d<0);
	return d;
}
int nhapc()
{
    int c;
		do{
		cout<<"nhap so cot:";cin>>c;
		if(c<0)
		cout<<"loi moi nhap lai\n";
	}while(c<0);
	return c;
}
void taongaunhien(int m[100][100],int d,int c)
{
	while(true)
	{
		int tong=0;
		for(int i=0;i<d;i++)
		{
			for(int j=0;j<c;j++)
			{
				m[i][j]=abs(rand())%100;
				time(NULL);
				tong+=m[i][j];
			}
		}
		if(tong==200)
		{
			for(int i=0;i<d;i++)
			{
				for(int j=0;j<c;j++)
				cout<<"dong "<<i<<" cot "<<j<<" ="<<m[i][j]<<endl;
			}
			cout<<"tong la 200";break;
		}
		
		else
		continue;
	}
}
int main(){
	int m[100][100];
	int d,c;
	d=nhaph();
	c=nhapc();
	taongaunhien(m,d,c);
	return 0;
}
