#include<iostream>
#include<queue>
#include<conio.h>

using namespace std;

void show(queue <int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}

void showrev(queue <int> q){
	if(q.empty())
	return ;
	
	int x=q.front();
	q.pop();
	
	showrev(q);
	
	cout<<x<<" ";	
}


int main(){
	queue <int> q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	cout<<"Showing queue: ";
	show(q);
	
	cout<<"\nShowing reverse queue: ";
	showrev(q);

	getch();
}
