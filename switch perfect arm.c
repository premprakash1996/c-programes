#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c,n,r,temp,i,sum=0;
	scanf("%d",&c);
	scanf("%d",&n);
	temp=n;
	switch(c)
	{
		case 1: while(n!=0)
				{
					r=n%10;
					sum=sum+pow(r,3);
					n=n/10;
				}	
				if(sum==temp)
				printf("Yes Arm");
				else 
				printf("NOt ARM ");			
				break;
		case 2: for(i=1;i<n;i++)
				{
					if(n%i==0)	
					sum=sum+i;
				}
				if(sum==temp)
				printf("Yes Perfect");
				else 
				printf("NOT PERFECT");			
				break;
		default : 	printf("!!!!!!");
					break;		
	}
	
	getch();
}
