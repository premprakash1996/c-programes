#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class rregister
{
	char reg[12],name[15],mailid[20];
	int age;
	public:
	int input(int);
	int check(int);
	void display(int);	
}r[10];
int rregister::check(int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		if(strcmp(r[i].reg,r[x].reg)==0)
	{
		cout<<"Wrong entry because it matches entry no"<<i+1;	
		return 0;
	}
	}
	if(i==x) 
	return 1;
}
int rregister::input(int x)
{
	int c;
	cout<<"Enter the details:\n";
	cout<<"Enter the reg no: ";
	cin>>reg;
	c=check(x);
	if(c==1)
	{
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"Enter the mail id: ";
	cin>>mailid;
	x++;
	}
	return x;
}
void rregister::display(int x)
{
	int i;
	for(i=0;i<x;i++)
	{
	cout<<"Registration "<<i+1;	
	cout<<"\nThe reg no is: "<<r[i].reg;
	cout<<"\nThe name is: "<<r[i].name;
	cout<<"\nThe age is: "<<r[i].age;
	cout<<"\nThe email id is: "<<r[i].mailid;
	}
}
int main()
{
	int k,a=1,x=0;
	cout<<"Enter your choice:\n1 for Input\n2 for Display\nElse exit\n";
	while(a==1)
	{	
		cin>>k;
		switch(k)
		{
			case 1: x=r[x].input(x);
					break;
			case 2: r[0].display(x);
					break;
			default: cout<<"Wrong choice!!!\n";				
					 break;	
		}	
		cout<<"\nWant to do more operations??\nPress 1 or else exit";
		cin>>a;
	}
	getch();
}
