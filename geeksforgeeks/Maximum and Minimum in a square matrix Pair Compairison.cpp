#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,mat[20][20],i,j,min=11111111,max=-1111111;
	cout<<"Enter the no of rows/columns: ";
	cin>>n;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<=n/2;j++){
			if(mat[i][j]>=mat[i][n-1-j]){
				if(mat[i][j]>max)
					max=mat[i][j];
				if(mat[i][n-1-j]<min)
					min=mat[i][n-1-j];
			}
			else{
				if(mat[i][n-1-j]>max)
					max=mat[i][n-1-j];
				if(mat[i][j]<min)
					min=mat[i][j];
			}
		}
	}
	
	cout<<"The max value is: "<<max<<"and The min value is: "<<min;
	getch();
}
