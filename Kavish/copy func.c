#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20]="kavish",b[10]="jain";
	strcpy(a,b);
	puts(a);
	puts(b);
	a[20]="kavish",b[10]="jain";
	strcat(a,b);
	puts(a);
	puts(b);

	getch();
	
}
