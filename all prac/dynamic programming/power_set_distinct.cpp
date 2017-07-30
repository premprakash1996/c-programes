#include <bits/stdc++.h>

using namespace std;

int main(){
	string s="abbcc";
	string temp;
	int i,j,x=s.length(),count=0;
	unordered_set<string> lol;
	
	for(i=0;i<pow(2,x);i++){
		temp="{";
		for(j=0;j<x;j++){
			if(i & (1<<j)){
				temp+=s[j];
			}
		}
		temp+="}";
		if(lol.find(temp) == lol.end()){
		  count++;
		  lol.insert(temp);
		  cout<<temp<<endl;  
		}
		
	}
	cout<<"Total "<<count;
	return 0;
//	getch();
}
