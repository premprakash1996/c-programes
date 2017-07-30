#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	string s="abcd";
	int i,j,x=s.length();
	
	for(i=0;i<pow(2,x);i++){
		cout<<"\n{ ";
		for(j=0;j<x;j++){
			if(i & (1<<j)){
				cout<<s[j]<<" ";
			}
		}
		cout<<"}";
	}
	
	getch();
}
