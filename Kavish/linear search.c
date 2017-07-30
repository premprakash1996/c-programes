#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],s;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("found at pos %d",i+1);
			break;
		}				
	}
	if(i==n)
	printf("Not found");
	getch();
}
