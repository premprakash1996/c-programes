// Stacks using structures , passing by reference(pointer method)

#include<iostream>
#include<conio.h>
#define size 5

using namespace std;

struct stack{
	int data[size];				// Note:: didn't use global object, passed the object by reference of pointers method 
	int top;
};

int push(struct stack *s, int x){
	if(s->top>=size-1){
		cout<<"Already full\n";
		return 0;
	}
	
	else{
		s->data[++s->top]=x;			// ++s->top works fine.. i.e., incrementing the s->top value
		return 1;
	}
	return 0;
}

int pop(struct stack *s){
	if(s->top<0){
		cout<<"Already Empty\n";
		return 0;
	}
	
	else{
		--s->top;
		return 1;
	}
	
}



int main(){
	struct stack s;   // struct stack s.top=-1; not allowed
	s.top=-1;			// first create obj then give value
	int x,i=6,val;
	
	while(i==6){
		cout<<"What u wanna do... insert(push=1) or del(pop=2) or view(3) otehrwise:";
		cin>>x;
		int y;
		switch(x){
			case 1: cout<<"Enter the element u wanna insert: ";
					cin>>val;
					y=push(&s,val);
					if(y==1){
						cout<<"Pushed successfully\nNow there are "<<s.top+1<<" elements in the stack\n";
					}
					else{
						cout<<"Push Unsuccessfull, still holding "<<s.top+1<<" elements\n";
					}
					break;
			case 2: cout<<"OOHHH.. so u wanna delete... !!";
					y=pop(&s);
					if(y==1){
						if(s.top>-1)
						cout<<"Popped successfully\nNow there are "<<s.top+1<<" elements in the stack\n";
						else
						cout<<"Popped successfully\nNow there are no elements in the satck\n";
					}
					else{
						cout<<"Pop Unsuccessfull, still holding no elements\n";
					}
					break;
			case 3: if(s.top<0){
					cout<<"Nothing to show folks\n";
					break;
					} 
					cout<<"\nThe stack is:\n";
					for(int k=0;k<=s.top;k++){
						cout<<s.data[k]<<"  ";	
					}
					cout<<endl;		
					break;		
			default:cout<<"Press something which makes sense :P";
		}
		
		cout<<"Wanna have access to more operations?? press 6";
		cin>>i;
	}
	
	getch();
	
}
