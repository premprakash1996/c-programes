#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char given[100]="When the going gets tough, the tough stay put!", find[10];
	puts(given);
	gets(find);
	if (strstr(given,find)!=0&&find[0]!=0)   
	{
		printf("What u looked for  '%s' is found ",find); 		
	}
	else
	printf("Sorry !!!!");
	getch();
}
