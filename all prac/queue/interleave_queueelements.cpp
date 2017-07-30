#include<iostream>
#include<stack>
#include<queue>
#include<conio.h>

using namespace std;

int main(){
	queue <int> q;
	stack <int> s;
	
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
//	q.push(20);
	
	int x,i,y,len=q.size();
	y=len;
	if(len%2!=0)
		len=(len+1)/2;
	
	else len=len/2;
	
	for(i=0;i<len;i++){
		x=q.front();
		s.push(x);
		q.pop();
	}
	
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	
	for(i=0;i<(q.size()-len);i++){
		x=q.front();
		q.pop();
		q.push(x);
	}
	
	for(i=0;i<len;i++){
		x=q.front();
		s.push(x);
		q.pop();
	}
	
	while(!s.empty()){
		x=s.top();
		s.pop();
		q.push(x);
		if(!s.empty() || (len==(y-len))){
			x=q.front();
			q.pop();
			q.push(x);
		}
	}
	
	cout<<"The final is: ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	getch();
}
