#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
	char name[20];
	long int pno;
}e[100];
int x;
void display()
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("Employee %d: ",i+1);
		printf("%s",e[i].name);
		printf("\nHis phone no.: ");
		printf("%ld\n",e[i].pno);
	}
}

void sort()
{
	int i,j;
	struct emp t;
	for(i=0;i<x-1;i++)
	{
		j=i+1;
		while(j>0&&strcmp(e[j].name,e[j-1].name)<0)
		{
			strcpy(t.name,e[j].name);
			t.pno=e[j].pno;
			strcpy(e[j].name,e[j-1].name);
			e[j].pno=e[j-1].pno;
			strcpy(e[j-1].name,t.name);
			e[j-1].pno=t.pno;
			j--;
		}	
	}	
}

void add()
{
	printf("Enter employee name:");
	scanf("%s",e[x].name);
	printf("Enter the phone no:");
	scanf("%ld",&e[x].pno);
	x++;
	sort();
}

int main()
{
	int k;
	x=0;
	printf("You want to add an employee:\nPress 1 for yes or else no:");
	scanf("%d",&k);
	while(k==1)
	{
		add();	
		printf("Press 1 to add more employee");
		scanf("%d",&k);
	}
	display();
	getch();
}
