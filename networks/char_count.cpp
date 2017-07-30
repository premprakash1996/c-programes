#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	char size[3],frame[20][20],send[100]="";
	int n,y,i=0,j,len[20];
	
	do
	{
		cout<<"\n\nEnter the word:";
		cin>>frame[i++];
		cout<<"Do you want to continue: (y: 1/n: 0)?:";
		cin>>y;
	}while(y==1);
	
	n=i;  // n is the no of frames that has been input by user
	
	for(i=0;i<n;i++)
	{
		len[i]=strlen(frame[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		itoa(len[i]+1,size,10);
		strcat(send,size);
		strcat(send,frame[i]);
	}
	
	cout<<"\n\nThe transmitted data is:\n";
	cout<<send;
	
	getch();
}
