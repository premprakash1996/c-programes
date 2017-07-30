//#include<iostream>
//#include<conio.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	//int a[]={1,4,6,2,7,9,3,5,4};
	//int n=9;
	vector <int> a;
	int x;
	for(int i=0;i<9;i++){
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),greater<int>());
	
	for(int i=0;i<9;i++)
	cout<<a[i]<<" ";
	getch();
	
}
