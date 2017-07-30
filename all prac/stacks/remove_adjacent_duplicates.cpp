#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

void stackstring(stack <char> st,string *temp){
	
	if(st.empty())
		return ;
	
	char x=st.top();
	st.pop();
	
	stackstring(st,temp);
	cout<<"\nAdding "<<x;
	(*temp)+=x;
}

string checkremove(stack <char> st, string s){
	string temp;
	int i=0,len=s.length();
	
	while(i<len){	
		if(st.empty() || st.top()!=s[i]){
			st.push(s[i]);
		}	
		else{
			st.pop();
		}
		i++;
	}
	
	stackstring(st,&temp); 
	
	return temp;
}


int main()
{
	stack <char> st;
	string s;
	cout<<"Enter the string (no space): ";
	cin>>s;
	s=checkremove(st,s);
	cout<<"After operation: "<<s;
	getch();
	
}
