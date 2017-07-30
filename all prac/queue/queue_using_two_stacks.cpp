// queue using stacks
#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

void dequeue(stack <int> &s1, stack <int> &s2){
	
	if(s1.empty() && s2.empty()) cout<<"No pop possible, already empty queue";
	
	else if(!s2.empty()) s2.pop();
	
	else{
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		s2.pop();
	}
}

void show(stack <int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}


int main(){
	
	stack <int> st1,st2;
	int i=1,k,a;
	while(i==1){
		cout<<"What operation 1(queue) 2(dequeue)??";
		cin>>k;
		if(k==1){
			cout<<"push element: ";
			cin>>a;
			st1.push(a);
			cout<<"\nStack1 after push";
			show(st1);
			cout<<"\nStack2 after push";
			show(st2);
		}
		else if(k==2){
			cout<<"\n POP ";
			dequeue(st1,st2);
			cout<<"\nStack1 after pop";
			show(st1);
			cout<<"\nStack2 after pop";
			show(st2);
		}
		cout<<"\nMore operations?? enter 1";
		cin>>i;	
	}
	
	getch();
	
}
