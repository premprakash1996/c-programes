#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	a[0]=0;
	a[1]=1;
	printf("%d%d",a[0],a[1]);
	for(i=2;1<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	    printf("%d",a[i]);
    }
    getch();
}
