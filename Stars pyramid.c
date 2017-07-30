#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,p=2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\*d\n",p);
		for(j=0;j<i;j++)
		{
			printf("*");
		}
	}
	getch();
}
