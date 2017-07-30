#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char dle[4],stx[4],etx[4],data[100],stuff[110]="",send[130]="";
	int i,n,j;
	cout<<"Enter the dle byte: ";
	cin>>dle;
	cout<<"Enter the stx byte: ";
	cin>>stx;
	cout<<"Enter the etx byte: ";
	cin>>etx;
	cout<<"Enter the data to be sent:";
	cin>>data;
	n=strlen(data);
	
	for(i=0,j=0;i<n;i++)
	{
		if(data[i]==dle[0])
			stuff[j++]=dle[0];
			
		stuff[j++]=data[i];
	}

	cout<<"The stuffed data is: "<<stuff;
	
	strcat(send,dle);
	strcat(send,stx);
	strcat(send,stuff);
	strcat(send,dle);
	strcat(send,etx);
	
	cout<<"\n\nThe data transmitted is: "<<send;
	
	getch();
}
