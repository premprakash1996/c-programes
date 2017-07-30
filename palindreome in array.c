#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50];
	int l,flag=0,i;
	gets(a);
	l=strlen(a);
	for(i=0;i<=l/2;i++)
	{
	 	 if(a[i]==a[l-i-1])
		 flag=1;	
		 else
		{
		printf("No");	
		break;
		}
	}
	if(flag==1)
	printf("yess");
	getch();
}
