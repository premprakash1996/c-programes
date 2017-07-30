#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

void permut(list <string> &l, string s){
	
	if(s.length()==0){
		l.push_front("");
		return ;
	}
	
	char c=s[0];
	int p=s.length();
	string str=s.substr(1,p-1);
	
	permut(l,str);
	
	list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it){
		string temp=*it;
		p=temp.length();
		for(int i=0;i<p;i++){
			string m=temp.substr(0,i);
			string n=temp.substr(i,p-i);
			l.push_front(m+c+n);
		}	
		l.push_front(temp+c);
    }
}


int main(){
	string s="12345";
	list <string> l;
	int count=0;
	
	permut(l,s);
	
	list <string> :: iterator it;
    for(it = l.begin(); it != l.end(); ++it)
    	if((*it).length()==s.length())
    	if(++count)
        cout << "\n" << *it;
	cout<<"\nTotal: "<<count;
	getch();
	
}
