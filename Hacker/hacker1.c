#include<stdio.h>
#include<conio.h>
int main()
{
	int ch,i,n,temp,a,count;
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
	scanf("%d",&n);
	temp=n;
	count=0;
	while(n!=0)
	{
		a=n%10;
		if(a==0)
		count=count;
		else if(temp%a==0)
		count++;	
		n=n/10;
	}
	printf("%d",count);
	}
	getch();
}
