#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
	int c1=0,c2=0,c,cr,i,n,j,m,d[10][10],dt[10]={0},x=0,l,no;
	char data[10][10],rslt[12],check[12]="",checkr[12]="";
	cout<<"Enter the no of frames: ";
	cin>>n;
	cout<<"Enter the size of each frame: ";
	cin>>m;
	no=pow(16,m)-1;
	for(i=0;i<n;i++)
		cin>>data[i];
		
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		if(data[i][j]<58)
		d[i][j]=data[i][j]-48;
		else
		d[i][j]=data[i][j]-87;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			dt[i]+=d[i][m-j-1]*pow(16,j);
		}
		cout<<"\n"<<dt[i];
	}
	
	for(i=0;i<n;i++)
	{
		x+=dt[i];
	}
	
	itoa(x,rslt,16);
	cout<<endl<<rslt<<endl;
	l=strlen(rslt);
	
	for(j=0;j<l;j++)
	{
		if(j<m)
		{
			if(rslt[l-1-j]<58)
			c1+=(rslt[l-1-j]-48)*pow(16,j);
			else		
			c1+=(rslt[l-1-j]-87)*pow(16,j);
		}
		else
		{	
			if(rslt[l-1-j]<58)
			c2+=(rslt[l-1-j]-48)*pow(16,j-m);
			else
			c2+=(rslt[l-1-j]-87)*pow(16,j-m);
		}
	}
	
	c=(c1+c2)^no;

	itoa(c,check,16);
	cout<<"\n\nThe transmitted checksum is: "<<check<<"\n";
	
	cout<<"\nTransmitted data is: ";
	for(i=0;i<n;i++)
	cout<<data[i];
	cout<<check;
	
	cr=(c+c1+c2)^no;
	itoa(cr,checkr,16);
	cout<<"\n\nThe received checksum is:  ";
	cout<<checkr<<"\nSo,there is no errorr";
	getch();
}
