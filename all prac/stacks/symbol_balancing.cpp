#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

int balance(stack <char> st, string s){
	int i,x=s.length();
	cout<<"The length: "<<x<<endl;
	for(i=0;i<x;i++){
		if( s[i]=='(' || s[i]=='{' || s[i]=='[' )
			st.push(s[i]);
			
		else if( s[i]==')' || s[i]=='}' || s[i]==']' ){
			if(st.empty())
				return 0;
			if( st.top()=='(' && s[i]==')' ){
				st.pop();
			}
			else if( st.top()=='{' && s[i]=='}' ){
				st.pop();
			}
			else if( st.top()=='[' && s[i]==']' ){
				st.pop();
			}	
				
			else return 0;		
		}
	}
	if(st.empty())
		return 1;
	else return 0;	
}


int main(){
	stack <char> st;
	string s;
	cin>>s;
	
	int x;
	x=balance(st,s);
	if(x)
		cout<<"Yes balanced";
	else
		cout<<"Not";
	
	
	getch();
}
