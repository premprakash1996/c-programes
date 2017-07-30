///// passing by value: 
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void swap(int x, int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"\a"<<x<<"\n"<<y<<"\n";
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<"\n"<<b;
	getch();
}	
