#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],x;
	int i=0;
	scanf("%s",a);
	while(i>=0)
	{
		x=getch();
		if(x!=13)
		{
			b[i++]=x;
			printf("*");
		}
		else break;
	}
	if(strcmp(a,b)==0)
	printf("\nYes ur password is correct");
	else printf("\nNo!!!");
	getch();
}
