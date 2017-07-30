#include<iostream>
#include<conio.h>
using namespace std;

void adj_mat(int adj[][10], int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>adj[i][j];
}

void in_out_degree(int v, int adj[][10], int n, int inout[][2])
{
	
	for(int i=0;i<n;i++)
	{
		if(adj[v][i]==1)
		inout[v][1]++;
		if(adj[i][v]==1)
		inout[v][0]++;
	}
}

int main()
{
	int adj[10][10],n,i,inout[10][2]={0};
	cout<<"Enter the no of vertices\n";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	adj_mat(adj,n);
	for(i=0;i<n;i++)
	{
		in_out_degree(i,adj,n,inout);
	}
	for(i=0;i<n;i++)
	cout<<"\n\n\tVertex "<<i+1<<"\nIndegree : "<<inout[i][0]<<"\nOutdegree : "<<inout[i][1];
	getch();
}
