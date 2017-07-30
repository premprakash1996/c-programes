#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	do
	{
		int l,i;
		string dle="*",stx="#",etx="$",a;
		cin>>a;
		cout<<a;
		l=a.length();	
		for(i=0;i<l;i++)
		{
			if(a[i]==dle[0])
			a.insert(i,stx);
			i++;
		}
		cout<<"\n"<<a;
		cout<<"\n More??";
		cin>>ch;
	}while(ch=='y');
	getch();
}
