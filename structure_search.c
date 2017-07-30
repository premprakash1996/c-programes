#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int roll,year;
	char name[20],course[10],department[20];
	void getvalue()
	{
		printf("Enter the roll no & year of joining");
		scanf("%d%d",&roll,&year);
		printf("Enter the name, course & dpartment");
		gets(name);
		gets(course);	
		gets(department);
	}
	void display()
	{
		printf("the roll , year of joining , name , course and department are");	
		printf("\n%d\n%d",roll,year);
		puts(name);
		puts(course);
		puts(department);
	}
};
int main()
{
	struct student st[450];
	int n,i,sroll;
	printf("Enter the no of students details u want to fill");
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	st[i].getvalue();
	printf("Enter the roll no u want to be searched for");
	scanf("%d",&sroll);
	for(i=0;i<n;i++)
	if(st[i].roll==sroll)
	st[i].display();
	else
	printf("sry");
	getch();
}
