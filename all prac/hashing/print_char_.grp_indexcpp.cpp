#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
	
	string s;
	s="3312232331312";
	
	map <char, queue <int> > m;
	map <char,int> m1;
	
	int n=s.length();
	
	for(int i=0;i<n;i++){
		m[s[i]].push(i);
	//	+=(48+i);
		m1[s[i]]++;
	}
	
//	for(it=m1.begin();it!=m1.end();it++) cout<<it->first<<" "<<it->second<<endl;
	
	int j;
	for(int i=0;i<n;i++){
		j=s[i]-48;
		if(!m[s[i]].empty() && m1[s[i]]%(j)==0){
			while(j>0){
				cout<<m[s[i]].front()<<" ";
		m[s[i]].pop();	
		j--;		
			}
			cout<<endl;
		}
		m1[s[i]]--;
		
	}
	
	
	
	getch();
}
