#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
	int id;
	char name[20];
	char add[20];
	public:
	void input();
	friend void check();
}e[2];
void employee::input()
{
	cout<<"Enter id, name and address of the employee:\n";
	cin>>id;
	cin>>name;
	cin>>add;
}
class student
{
	char type[10];
	char name[20];
	char course[10];
	char add[20];
	public:
	void input();
	friend void check();
}s[2];
void student::input()
{
	cout<<"Enter type, name, course and address of the student:\n";
	cin>>type;
	cin>>name;
	cin>>course;
	cin>>add;
}

void check()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if((strcmp(e[i].name,s[j].name)==0) && (strcmp(e[i].add,s[j].add)==0))
			if(strcmp(s[j].type,"regular")==0)
			{
				cout<<"Sorry not possible u("<<s[j].name<<")cant be regular:\n";
			}	
		}		
	}
}
int main()
{
	int i;	
	for(i=0;i<2;i++)
	e[i].input();
	for(i=0;i<2;i++)
	s[i].input();
	check();
	getch();
}



