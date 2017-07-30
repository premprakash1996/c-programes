#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	long long int s,a[300];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	i=1;
	scanf("%lld",&s);	
	do
	{
	a[0]=0;
	a[1]=1;
	i++;
	a[i]=a[i-1]+a[i-2];
	}while(a[i]<=s);
    if(s==0||s==1||s==a[i-1])
    printf("IsFibo\n");
    else
    printf("IsNotFibo\n");
	}
	getch();	
}
