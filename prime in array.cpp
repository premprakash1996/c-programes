#include<stdio.h>
#include<conio.h>
int main()
{
	int n,l=1,k,i=4;
	scanf("%d",&n);
	int a[n];
	a[0]=2;
	a[1]=3;
	while(l<=n)
	{
		for(k=2;k<=i/2;i++)
		{  
		      if(i%k=0)
		      break;
			  else
			  {
					++l;
					a[l]=i;			  
			  }
		      k++;
		}
		
		
	} 
}
