#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
	int l,i=0,b[26]={0},c[26][2]={0};
	char a[100001];
	cin>>a;
	l=strlen(a);
	while(i<l)
		b[a[i++]-97]++;
	int k=-1,j,f;
	for(i=0;i<26;i++)
	{
		cout<<b[i]<<" ";
		f=0;
		for(j=0;j<=k;j++)
		{
			if(b[i]==c[j][0])
			{
				f=1;
				c[j][1]++;
			}
		}
		if(f==0 && b[i]!=0)
		{
			c[++k][0]=b[i];
			c[k][1]++;
		}
	}
	cout<<"\n";
	i=0;
	while(i<=k)
		cout<<"\n"<<c[i++][0]<<" "<<c[i][1];
	cout<<"\n";
	if(k>=2)
	{
		cout<<"NO";
	}
	else if(k==0)
	cout<<"YES";
	else
	{
		if(c[0][1]==1 || c[1][1]==1)
		{
			if(abs(c[0][0]-c[1][0])<=1)	
			cout<<"YES";
		}
		else
		cout<<"NO";
	}
	getch();
}
