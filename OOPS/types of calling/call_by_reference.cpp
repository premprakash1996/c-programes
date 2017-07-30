//////call by reference
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void swap(int &x,int &y)
{
	int i;
	i=x;
	x=y;
	y=i;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<"\n"<<b;
	getch();
}
