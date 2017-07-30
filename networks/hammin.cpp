#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int code[100]={0},rdata[100]={0},n,m,i=1,j=1,k,r,error=0,hcode[5],syndrome[5];
	
	cout<<"Enter the length of data:\n";
	cin>>n;
	cout<<"Enter the data:\n";
	while(i<=n)
	{
		if(j==1 || j==2 || j==4 || j==8)
			code[j++]=0;
		else
		{
			cin>>code[j++];
			i++;
		}
	}
	m=j-1;
	j=1;
	k=1;
	cout<<"\nThe generated code word: ";
	while(j<=m)
	{
		if(j==1)
			hcode[k++]=code[j]=code[1]^code[3]^code[5]^code[7]^code[9]^code[11];
		else if(j==2)
			hcode[k++]=code[j]=code[2]^code[3]^code[6]^code[7]^code[10]^code[11];
		else if(j==4)
			hcode[k++]=code[j]=code[4]^code[5]^code[6]^code[7]^code[12];
		else if(j==8)
			hcode[k++]=code[j]=code[8]^code[9]^code[10]^code[11]^code[12];
		cout<<code[j];
		j++;
	}
	r=k-1;
	j=1;
	cout<<"\nThe hamming code: ";
	while(j<=r)
	{
			cout<<hcode[j];
			j++;
	}
	
	cout<<"\nEnter the received data: \n";
	for(i=1;i<=m;i++)
		cin>>rdata[i];
	
	cout<<"\nSyndrome word: ";
	for(j=1;j<=r;j++)
	{
		if(j==1)
			syndrome[j]=rdata[1]^rdata[3]^rdata[5]^rdata[7]^rdata[9]^rdata[11];
		else if(j==2)
			syndrome[j]=rdata[2]^rdata[3]^rdata[6]^rdata[7]^rdata[10]^rdata[11];
		else if(j==3)
			syndrome[j]=rdata[4]^rdata[5]^rdata[6]^rdata[7]^rdata[12];
		else if(j==4)
			syndrome[j]=rdata[8]^rdata[9]^rdata[10]^rdata[11]^rdata[12];
		cout<<syndrome[j];
	}
	
	error=syndrome[4]*8+syndrome[3]*4+syndrome[2]*2+syndrome[1];
	
	if(error==0)
		cout<<"\nSyndrome is zero so there is no error";
	else
		{
			cout<<"\nThe error is in bit no "<<error;
			cout<<"\nSo the correct data can be obtained by inverting the bit "<<error<<" : ";
			for(i=1;i<=m;i++)
				if(i!=error)
					cout<<rdata[i];
				else
					cout<<!rdata[i];
		}
	getch();	
}
