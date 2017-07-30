#include<stdio.h>
#include<pthread.h>

void *prime(void *arg)
{
    int n,i;
    printf("Enter the no for prime check: ");
	scanf("%d",&n);	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("Not prime");
			break;
		}
	}
	if(i==(a/2)+1)
	printf("Yes it is prime");
}
  
void *fibo(void *arg)
{
    int a=0,b=1,c,n,i;
	printf("Enter the number of terms to be displayed : ");
	scanf("%d",&n);
	printf("\nThe fibonacci series is : \n%d  %d",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("  %d",c);
		a=b;
		b=c;
	}
}
  
void *factorial(void *arg)
{
	int n,fact=1,i;
	printf("Enter the no for factorial calculation: ");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		fact=fact*n;	
	}
	printf("The factorial is: %d",fact);
}  
  
int main()
{
    pthread_t tid1,tid2,tid3;
    pthread_create(&tid1,NULL,prime,NULL);
    pthread_join(tid1,NULL);
    pthread_create(&tid2,NULL,fibo,NULL);
    pthread_join(tid2,NULL);
    pthread_create(&tid3,NULL,factorial,NULL);
    pthread_join(tid3,NULL);
    return 0;
}
