#include<iostream>
#include<conio.h>

using namespace std;

int fibonacci_dp(int dp[],int n){
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;i++)
	dp[i]=dp[i-1]+dp[i-2];
	
	return dp[n];
}

int main(){
	int dp[1000]={0},n;
	
	cout<<"Enter the n for fibonacci: ";
	cin>>n;
	
	cout<<"The value is: "<<fibonacci_dp(dp,n);
	
	getch();
}
