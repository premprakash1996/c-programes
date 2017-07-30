#include<iostream>
#include<conio.h>

using namespace std;

struct s{
	int count;
};

void call(struct s *y){
	y->count=100;
}

int main(){
	struct s *x;
	x= new s;
	x->count=50;
	
	cout<<x->count<<" ";
	call(x);
	
	cout<<x->count;
	getch();
}
