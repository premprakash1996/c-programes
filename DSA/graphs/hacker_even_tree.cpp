#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,m,x,y,i,a[101],c[101],sum=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	c[i]=1;
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[x]=y;
	//	c[y]=1;
	}
/*	for(i=1;i<=n;i++)
	{
		if(c[i]==0)
		c[i]=1;
		else
		c[i]=0;
	} */
	for(i=n;i>=1;i--)
	{
		c[a[i]]=c[a[i]]+c[i];
	}
	for(i=1;i<=n;i++)
	cout<<c[i]<<" ";
	for(i=2;i<=n;i++)
	if(c[i]%2==0)
	sum++;
	cout<<sum;
	getch();
}
