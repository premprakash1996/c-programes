#include<iostream>
#include<conio.h>
using namespace std;

int cost;

void quicksort(int arr[][3],int low,int high)
{
	if(low<high)
	{
		int pi=low,i,pivot=arr[high][2];
		for(i=low;i<high;i++)
		{
			if(arr[i][2]<=pivot)
			{
				swap(arr[i][2],arr[pi][2]);
				swap(arr[i][1],arr[pi][1]);
				swap(arr[i][0],arr[pi][0]);
				pi++;
			}	
		}
		swap(arr[high][2],arr[pi][2]);
		swap(arr[high][1],arr[pi][1]);
		swap(arr[high][0],arr[pi][0]);		
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}

void dfs(int adj[][3000],int vis[3000], int x,int n)
{
	vis[x]=1;
	for(int j=0;j<n;j++)
	{
		if(adj[x][j]!=100001 && vis[j]==0)
		dfs(adj,vis,j,n);
	}
}

void kmst(int adj[][3000], int arr[][3], int k, int visit[], int edges, int n)
{
	int vis[3000]={0};
	if(edges<n-1)
	{
			if(visit[arr[k][0]]==1 && visit[arr[k][1]]==1)
			{
				dfs(adj,vis,arr[k][0],n);	
				if(vis[arr[k][1]]==0)
				{
					adj[arr[k][0]][arr[k][1]]=arr[k][2];
					adj[arr[k][1]][arr[k][0]]=arr[k][2];
					cost=cost+arr[k][2];
					edges++;
				}			
				k++;
				kmst(adj,arr,k,visit,edges,n);
			}
			else
			{
				visit[arr[k][0]]=1;
				visit[arr[k][1]]=1;
				adj[arr[k][0]][arr[k][1]]=arr[k][2];
				adj[arr[k][1]][arr[k][0]]=arr[k][2];
				cost=cost+arr[k][2];
				k++;
				edges++;
				kmst(adj,arr,k,visit,edges,n);
			}
	}
	
}

int main()
{
	int n,m,a,b,c,s,visit[3000]={0},i,j,k,edges=0,t;
	static int adj[3000][3000];
	static int arr[4500000][3];
	cost=0;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		arr[i][0]=a-1;
		arr[i][1]=b-1;
		arr[i][2]=c;
	}
	cin>>s;
	quicksort(arr,0,m-1);
	k=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	adj[i][j]=100001;
	kmst(adj,arr,k,visit,edges,n);
	cout<<cost;
	getch();
}
