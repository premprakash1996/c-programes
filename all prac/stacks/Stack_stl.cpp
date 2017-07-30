#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

stack <int> reverse(stack <int> st){
	stack <int> st1;
	while(!st.empty()){
		st1.push(st.top());
		st.pop();
	}
	return st1;
}


void show(stack <int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}


int main(){
	
	stack <int> st,st1;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	
	cout<<"Stack 1: ";
	show(st);
	
	cout<<"\nshowing Stack 1 again: ";
	show(st);
	
	st1=reverse(st);
	
	cout<<"\nshowing Stack 2: ";
	show(st1);
	
	getch();
}
