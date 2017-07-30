#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long long int fac=1;
	int i,n;
	cout<<"Enter the number:";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		fac=fac*i;
	}
	cout<<fac;
	getch();
}
	
