#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[10],i,b[10],k=-5,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>1)
		{
		for(i=2;i<=a[i]/2;i++)
		if(a[i]%i==0)
		{
			break;
		}	
		if(i==((a[i]/2)+1))
		if(k!=a[i])
		{
			b[j++]=a[i];	
			k=a[i];
		}
		}
	}
	for(i=0;i<j;i++)
	printf("%d",b[i]);	
	getch();
}
