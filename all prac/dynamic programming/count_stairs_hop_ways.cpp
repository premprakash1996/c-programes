#include<iostream>
#include<conio.h>

using namespace std;

int stairs(int memo[100], int n){
	
	if(n<0) return 0;
	else if(n==0) return 1;
	
	else if(memo[n]!=-1) return memo[n];
	
	else{
		memo[n]=stairs(memo,n-1)+stairs(memo,n-2)+stairs(memo,n-3);
		return memo[n];
	}
}


int main(){
	int  memo[100],n;
	cout<<"Enter the staircases: ";
	cin>>n;
	for(int i=0;i<=n;i++)
		memo[i]=-1;
	cout<<"The no of cases are: "<<stairs(memo,n);
	getch();
}
