#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char a[9]="01111110",data[100],stuff[110]="",send[130]="";
	int i,n,j,count=0;
	cout<<"Enter the data to be sent:";
	cin>>data;
	n=strlen(data);
	
	for(i=0,j=0;i<n;i++)
	{
		stuff[j++]=data[i];
		if(data[i]=='1')
			count++;
		else count=0;
		if(count==5)
		{
			stuff[j++]='0';
			count=0;
		}
	}

	cout<<"The stuffed data is: "<<stuff;
	
	strcat(send,a);
	strcat(send,stuff);
	strcat(send,a);
	
	cout<<"\n\nThe data transmitted is: "<<send;
	
	getch();
}
