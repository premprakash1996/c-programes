#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int n,a[100001],i,h=0,x,y,z,tot=0;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		x=tot+tot-a[i];
		if(x<0)
		{
			z=pow(2,i);
			y=-x/z;
			if(-x%z!=0)
			y++;
			h+=y;
			tot=tot+tot+y*pow(2,i);
			tot=tot-a[i];
		}
		else 
		tot=x;
	}
	cout<<tot<<endl;
	cout<<h;
	getch();
}
