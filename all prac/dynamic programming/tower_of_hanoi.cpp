#include<iostream>
#include<conio.h>

using namespace std;

void towerhanoi(int n, char beg, char temp, char end, int &count){
	
	if(n==1){
		cout<<beg<<"---->"<<end<<endl;
		count++;
		return;
	}
	else{
		towerhanoi(n-1,beg,end,temp,count);
		towerhanoi(1,beg,temp,end,count);
		towerhanoi(n-1,temp,beg,end,count);
	}
}

int main(){
	int n,count=0;
	cout<<"Enter the no of discs u have: ";
	cin>>n;
	
	towerhanoi(n,'A','B','C',count);
	
	cout<<"Total moves req:"<<count;
	getch();
}
