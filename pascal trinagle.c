#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",k);
		for(k=i-1;k>=1;k--)
		printf("%d",k);	
		printf("\n");
	}
getch();
}
