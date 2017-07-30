#include<iostream>
#include<conio.h>
using namespace std;

void adj_mat(int adj[][10], int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>adj[i][j];
}

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

void dfs(int adj[][10],int vis[10], int x,int n)
{
	vis[x]=1;
	for(int j=0;j<n;j++)
	{
		if(adj[x][j]!=1000 && vis[j]==0)
		dfs(adj,vis,j,n);
	}
}

void kmst(int adj[][10], int arr[][3], int k, int visit[], int edges, int n)
{
	int vis[10]={0};
	if(edges<n-1)
	{
/*		if(k==0)
		{
			visit[arr[k][0]]=1;
			visit[arr[k][1]]=1;
			adj[arr[k][0]]=arr[k][2];
			adj[arr[k][1]]=arr[k][2];
			cout<<arr[k][0]<<"_"<<arr[k][2]<<"_"<<arr[k][1];
			k++;
			edges++;
			kmst(adj,arr,k,visit,edges,n);
		}		
		else
		{
*/			if(visit[arr[k][0]]==1 && visit[arr[k][1]]==1)
			{
				dfs(adj,vis,arr[k][0],n);	
				if(vis[arr[k][1]]==0)
				{
					adj[arr[k][0]][arr[k][1]]=arr[k][2];
					adj[arr[k][1]][arr[k][0]]=arr[k][2];
					cout<<arr[k][0]<<"--"<<arr[k][2]<<"-->"<<arr[k][1]<<"  ";
					edges++;
				}			
				k++;
				kmst(adj,arr,k,visit,edges,n);
			}
/*			else if(visit[arr[k][0]]==0 && visit[arr[k][1]]==0)
			{
				visit[arr[k][0]]=1;
				visit[arr[k][1]]=1;
				adj[arr[k][0]]=arr[k][2];
				adj[arr[k][1]]=arr[k][2];
				cout<<"\n"<<arr[k][0]<<"_"<<arr[k][2]<<"_"<<arr[k][1];
				k++;
				edges++;
				kmst(adj,arr,k,visit,edges,n);
			}
*/			else
			{
				visit[arr[k][0]]=1;
				visit[arr[k][1]]=1;
				adj[arr[k][0]][arr[k][1]]=arr[k][2];
				adj[arr[k][1]][arr[k][0]]=arr[k][2];
				cout<<arr[k][0]<<"--"<<arr[k][2]<<"-->"<<arr[k][1]<<"  ";
				k++;
				edges++;
				kmst(adj,arr,k,visit,edges,n);
			}
			
//		}
	}
	
}

int main()
{
	int n,adj[10][10],arr[100][3],visit[10]={0},i,j,k,edges=0,t;
	cout<<"Enter the number of vertices: ";
	cin>>n;
	cout<<"Enter the adjacency matrix\n";
	adj_mat(adj,n);
	t=(n*n-n)/2;
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			arr[k][0]=i;
			arr[k][1]=j;
			arr[k][2]=adj[i][j];
			k++;
		}
	}
	quicksort(arr,0,t-1);
	cout<<"\nSorted Edges\n";
	for(i=0;i<t;i++)
	cout<<arr[i][0]<<"  "<<arr[i][1]<<"  "<<arr[i][2]<<"\n";
	k=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	adj[i][j]=1000;
	kmst(adj,arr,k,visit,edges,n);
	cout<<"\n\nMST Adjacency Matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<adj[i][j]<<"       ";
		cout<<"\n";
	}
	getch();
}
