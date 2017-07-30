#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
	
	string s;
	
	cin>>s;
	
	int n=s.length();
	
	map <char,int> m;
	map <char,int> m1;
	
	for(int i=0;i<n;i++){
		m[s[i]]++;
		m1[s[i]]=1;
	}
	
	cout<<"In lexical order:\n";
	
	map <char,int> :: iterator it;
	
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
	
	cout<<"\nIn the order they appear:\n";
	
	for(int i=0;i<n;i++){
		if(m1[s[i]]==1){
			cout<<s[i]<<" "<<m[s[i]]<<endl;
			m1[s[i]]=0;
		}
	}
	
	
	getch();
}
