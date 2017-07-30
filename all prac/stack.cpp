// Stacks using simple arrays

#include<iostream>
#include<conio.h>
#define size 5

using namespace std;

int push(int s[], int x, int &top){
	if(top>=size-1){
		cout<<"Already full\n";
		return 0;
	}
	
	else{
		s[++top]=x;
		return 1;
	}
	return 0;
}

int pop(int &top){
	if(top<0){
		cout<<"Already Empty\n";
		return 0;
	}
	
	else{
		--top;
		return 1;
	}
	
}

int main(){
	int s[size];
	int x,i=6,top=-1,val;
	
	while(i==6){
		cout<<"What u wanna do... insert(push=1) or del(pop=2) or view(3) or otehrwise:";
		cin>>x;
		int y;
		switch(x){
			case 1: cout<<"Enter the element u wanna insert: ";
					cin>>val;
					y=push(s,val,top);
					if(y==1){
						cout<<"Pushed successfully\nNow there are "<<top+1<<" elements in the stack\n";
					}
					else{
						cout<<"Push Unsuccessfull, still holding "<<top+1<<" elements\n";
					}
					break;
			case 2: cout<<"OOHHH.. so u wanna delete... !!";
					y=pop(top);
					if(y==1){
						if(top>-1)
						cout<<"Popped successfully\nNow there are "<<top+1<<" elements in the stack\n";
						else
						cout<<"Popped successfully\nNow there are no elements in the satck\n";
					}
					else{
						cout<<"Pop Unsuccessfull, still holding no elements\n";
					}
					break;
			case 3: if(top<0){
					cout<<"Nothing to show folks\n";
					break;
					} 
					cout<<"\nThe stack is:\n";
					for(int k=0;k<=top;k++){
						cout<<s[k]<<"  ";	
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
