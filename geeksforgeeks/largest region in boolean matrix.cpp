#include<iostream>
#include<conio.h>

using namespace std;

void largestRegion(int row, int col, int m, int n, int adj[][10], int visit[][10], int &count){
	visit[row][col]=1;
	int i;
	int r[8]={-1,-1,-1,0,0,1,1,1};
	int c[8]={-1,0,1,-1,1,-1,0,1};
	for(i=0;i<8;i++){
			if((row+r[i])>=0 && (row+r[i])<n && (col+c[i])>=0 && (col+c[i])<m && adj[row+r[i]][col+c[i]]==1 && visit[row+r[i]][col+c[i]]==0){
				count++;
				largestRegion(row+r[i],col+c[i],m,n,adj,visit,count);
			}
	}
}

int main(){
	int i,j,k,count,n,m,adj[10][10],max=0,visit[10][10];
	cout<<"Enter the no of rows";
	cin>>n;
	cout<<"Enter the no of cols";
	cin>>m;
	cout<<"Enter the adj matrix"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>adj[i][j];
			visit[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			count=1;
			if(adj[i][j]==1 && visit[i][j]==0)
				largestRegion(i,j,m,n,adj,visit,count);
			if(max<count)	
				max=count;
			
		}
	}
	cout<<"The max region is:";
	cout<<max;
	getch();
}
