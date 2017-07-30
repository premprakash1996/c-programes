///////////BEEP
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int i=0;
	char ch[10],a;
	do{
		a=getch();	
		if(a!=13)
		{
		cout<<"\a*";
		ch[i++]=a;
		}	
	}while(a!=13);
    cout<<"\n"<<ch;
	getch();
}
