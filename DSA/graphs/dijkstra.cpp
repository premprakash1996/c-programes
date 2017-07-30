#include<iostream>
#include<conio.h>
using namespace std;

void dijkstra(int adj[][10], int visit[], int dist[], int x, int n, int j)
{
	int i,t,temp=50001;
	if(j<n)
	{
		for(i=0;i<n;i++)
		{
			if(visit[i]==0)
			{
				if((dist[x]+adj[x][i])<dist[i])
				dist[i]=dist[x]+adj[x][i];
				if(dist[i]<temp)
				{
					temp=dist[i];
					t=i;
				}
			}	
		}
		visit[t]=1;
		dijkstra(adj,visit,dist,t,n,++j);
	}
}

int main()
{
	int n,m,adj[10][10],visit[10]={0},dist[10],i,j,a,b,c,x;
	cout<<"Enter the number of vertices and edges: ";
	cin>>n>>m;
	cout<<"Enter the adjacency matrix\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
		adj[i][j]=0;
		else
		adj[i][j]=50000;
	}
	for(i=0;i<m;i++)
	{
		cin>>a;
	//	a=a-1;
		cin>>b;
	//	b=b-1;
		cin>>c;
		if(a!=b && c<adj[a][b]) 
		{adj[b][a]=c;
		adj[a][b]=c;}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<adj[i][j]<<"    ";
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	dist[i]=50000;
	cout<<"\n";
	cin>>x;
//	x=x-1;
	dist[x]=0;
	visit[x]=1;
	j=1;
	dijkstra(adj,visit,dist,x,n,j);
	for(i=0;i<n;i++)
	cout<<"\n"<<dist[i];
	getch();	
}
