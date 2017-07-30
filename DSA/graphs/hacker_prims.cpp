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
	int n,m,adj[10][10],visit[10]={0},i,j,a,b,c,x;
	cout<<"Enter the number of vertices and edges: ";
	cin>>n>>m;
	cout<<"Enter the adjacency matrix\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	adj[i][j]=1000;
	for(i=0;i<m;i++)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		if(a!=b && c<adj[a][b]) 
		{adj[b][a]=c;
		adj[a][b]=c;}
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	cout<<adj[i][j]<<"   ";
	cout<<"\n";
	}
	cin>>x;
	s.top=-1;
	s.tcost=0;
	pmst(x,adj,visit,n);
	cout<<"\nTotal cost:"<<s.tcost;
	getch();
}
