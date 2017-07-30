#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	long long int x;
	int a[32]={0},i=0;
	cin>>x;
	while(x>0)
	{
		a[i++]=x%2;
		x=x/2;
	}
	for(i=31;i>-1;i--)
	{
		if(a[i]==0)
		x=x*2+1;
		else
		x=x*2;
	}
	cout<<x;
	getch();
}
