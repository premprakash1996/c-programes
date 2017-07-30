#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	long long int a,b,c,n,i;
	cin>>a>>b>>n;
	for(i=0;i<n-2;i++)
	{
		c=a+b*b;
		a=b;
		b=c;
	}
	cout<<c;
	getch();
}
