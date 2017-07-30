#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,m,path[10][10],i,j,k,a,b,c,q;
	cout<<"Enter the number of vertices and edges: ";
	cin>>n>>m;
	cout<<"Enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(i==j)
		path[i][j]=0;
		else
		path[i][j]=50000;
	}
	for(i=0;i<m;i++)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		path[a][b]=c;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cout<<path[i][j]<<"    ";
		cout<<"\n";
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(path[i][k]==50000 || path[i][k]==0)
				break;
				if(path[i][j]>(path[i][k]+path[k][j]))
				path[i][j]=path[i][k]+path[k][j];
			}	
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cout<<path[i][j]<<"    ";
		cout<<"\n";
	}
	getch();
}
