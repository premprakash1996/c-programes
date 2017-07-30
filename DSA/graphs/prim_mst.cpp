#include<iostream>
#include<conio.h>
using namespace std;

struct stack
{
	int v[10];
	int top,tcost;
}s;

void add(int x)
{
	s.top++;
	s.v[s.top]=x;		
}

void adj_mat(int adj[][10], int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>adj[i][j];
}

void pmst(int v, int adj[][10], int visit[], int n)
{
	int cost,i,j,temp;
	add(v);
	cout<<"\nVisited Vertex :"<<s.v[s.top];
	visit[v]=1;
	if(s.top<n-1)
	{
		cost=1000;
		for(i=0;i<=s.top;i++)
		{
			for(j=0;j<n;j++)
			{
				if(visit[j]==0 && (adj[s.v[i]][j]<cost))
				{
					cost=adj[s.v[i]][j];
					temp=j;
				}	
			}
		}
		s.tcost=s.tcost+cost;
		if(cost!=1000)
		pmst(temp,adj,visit,n);
	}
}

int main()
{
	int n,adj[10][10]={1000},visit[10]={0},i;
	cout<<"Enter the number of vertices: ";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	adj_mat(adj,n);
	s.top=-1;
	s.tcost=0;
	for(i=0;i<n;i++)
	{
		cout<<"ok";
		if(visit[i]==0)
		pmst(i,adj,visit,n);
	}
	cout<<"\nTotal cost:"<<s.tcost;
	getch();
}
