#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],temp;
	int i,l;
	printf("Enter the string to be reversed :\n");
	gets(a);
	l=strlen(a);
	printf("String length is %d",l);
	printf("\nString after reversing is :\n");
	for(i=0;i<l/2;i++)
	{
		temp=a[l-i-1];
		a[l-i-1]=a[i];
		a[i]=temp;
	}
	
   	puts(a);
	getch();
	
	
}
