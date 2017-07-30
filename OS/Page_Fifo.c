#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m,a[100],b[10],i,j,k=0,l,fault=0;
	printf("Enter the no of characters: ");
	scanf("%d",&n);
	printf("Enter the characters:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the no of frames: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	b[i]=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			break;
		}	
		if(j==m)
		{
			fault++;
			b[(k++)%m]=a[i];	
		}
		printf("\n%d  ->>  ",a[i]);
		for(l=0;l<m;l++)
		{
			if(b[l]!=-1)
			printf("%d ",b[l]);
		}
		if(j!=m)
		printf("  Page Hit!!!");
	}
	printf("\n\nThe total page faults are %d",fault);
	getch();	
}
