#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,q,r=0,i,k=0;
	cin>>n;
	q=n/3;
	if(n%3==0)
		k=1;
	else
	{
		while(q>=0)
		{
			r=n-q*3;
			if(r%5==0)
			{
				k=2;
				break;
			}
			q--;	
		}
	}
	if(k==1 || k==2)
	for(i=1;i<=q*3;i++)
	cout<<"5";
	if(k==1 || k==2)
	for(i=1;i<=r;i++)
	cout<<"3";
	if(k==0)
	cout<<"-1";
	getch();
}
