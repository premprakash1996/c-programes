#include<iostream>
#include<conio.h>

using namespace std;

int fibonacci_memo(int memo[],int n){
	if(n==0 || n==1) return n;
	
	if(memo[n]==0)
	memo[n]=fibonacci_memo(memo, n-1)+fibonacci_memo(memo, n-2);
	
	return memo[n];
}

int main(){
	int memo[1000]={0},n;
	
	cout<<"Enter the n for fibonacci: ";
	cin>>n;
	
	cout<<"The value is: "<<fibonacci_memo(memo,n);
	
	getch();
}
