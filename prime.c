#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
	 	if(n%i==0)
		{
			printf("Not");
			break;	
		} 	
	}
	if(i==n/2-1)
	printf("Yessss.....");
	getch();
}
