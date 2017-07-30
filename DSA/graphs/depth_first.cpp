#include<iostream>
#include<conio.h>
using namespace std;

void adj_matrix(int adj[10][10],int n)
{
	cout<<"\nEnter the values to form The adjacency matrix:\n";
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		cin>>adj[i][j];
	}
}

void dfs(int adj[10][10],int visit[10], int x,int n)
{
	visit[x]=1;
	cout<<"\nThe Node visited is: "<<x;
	for(int j=0;j<n;j++)
	{
		if(adj[x][j]==1 && visit[j]==0)
		dfs(adj,visit,j,n);
	}
}

int main()
{
	int i,j,n,adj[10][10],visit[10]={0};
	cout<<"Enter the number of elements: ";
	cin>>n;
	adj_matrix(adj,n);
	for(i=0;i<n;i++)
	if(visit[i]==0)
	dfs(adj,visit,i,n);
	getch();
}
