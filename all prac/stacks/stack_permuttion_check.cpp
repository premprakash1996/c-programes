#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

int check(stack <int> st, stack <int> tmp, int a[10]){
	int i=-1;
	while(++i<=5){
		if(!st.empty() && st.top()==a[i]){
			st.pop();
			cout<<"X";
		}
		else if(tmp.empty())
			break;
		else {
			while(tmp.top()!=a[i]){
				st.push(tmp.top());
				tmp.pop();
				cout<<"S";
			}
			if(tmp.top()==a[i]){
				tmp.pop();
				cout<<"SX";
			}
			else break;
		}			
	}
	if(i<=5) return 0;
	else return 1;
}

int main(){
	stack <int> st,tmp;
	int x,a[10];
	
	tmp.push(6);
	tmp.push(5);
	tmp.push(4);
	tmp.push(3);
	tmp.push(2);
	tmp.push(1);
	
	cout<<"Enter the length 6 array";
	for(int i=0;i<6;i++) cin>>a[i];
	
	x=check(st,tmp,a);
	if(x)
	cout<<"Yes possible";
	else
	cout<<"Not possible";
	
	getch();
}
