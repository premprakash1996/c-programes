#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct queue
{
	int a[50];
	int front,rear;
}q;

void enqueue(int x)
{
	q.a[++q.rear]=x;
}

int dequeue()
{
	int x=q.a[q.front];
	q.front++;
	return x;
}

void adj_matrix(int adj[15][15],int n)
{
	cout<<"\nEnter the values to form The adjacency matrix:\n";
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>adj[i][j];
	}
}

void bfs(int x, int adj[15][15], int visit[15], int n)
{
	int y,j;
	enqueue(x);
	visit[x]=1;
	do
	{
		y=dequeue();
	//	if(visit[y]==0)
	//	{
			cout<<y<<"\n";
			for(j=1;j<=n;j++)
			if(adj[y][j]==1 && visit[j]==0)
			{
				visit[j]=1;
				enqueue(j);
			}
	//	}
	}while(q.rear>=q.front);
}

int main()
{
	q.rear=-1;
	q.front=0;
	int i,n,adj[15][15],visit[15]={0};
	cout<<"Enter the number of elements: ";
	cin>>n;
	adj_matrix(adj,n);
	cout<<"\n\n";
	for(i=1;i<=n;i++)
	{
		if(visit[i]==0)
		bfs(i,adj,visit,n);
	}
	getch();
}
