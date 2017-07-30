#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,f,i,y=0,x=0;
	
	printf("Enter the terms u want to appear on the screen : ");
	scanf("%d",&f);
	
	for(i=1;i<=f;i++)
	if(f%i==0)
	x++;
	
	if(x%2==0)
	n=1+sqrt(f);
	else 
	n=sqrt(f);
	
	printf("%d\n",n);
	
	int j,k,v[n*n],l=0;
	int a[n][n];
	
	v[0]=0;
	v[1]=1;
	for(i=2;i<f;i++)
	v[i]=v[i-1]+v[i-2];
		
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			
			if(l>f-1)
			{
				a[i][j]=' ';
				l++;
			}
			else
			a[i][j]=v[l++];
		}	
		for(k=i+1;k<n-i;k++)
		{
			
			if(l>f-1)
			{
				a[k][j-1]=' ';
				l++;
			}
			else
			a[k][j-1]=v[l++];
		}

		for(j=n-2-i;j>=i;j--)
		{
				
			if(l>f-1)
			{
				a[k-1][j]=' ';
				l++;
			}
			else
			a[k-1][j]=v[l++];
		}
		for(k=n-2-i;k>=i+1;k--)
		{
				
			if(l>f-1)
			{
				a[k][j+1]=' ';
				l++;
			}
		    else
			a[k][j+1]=v[l++];
		}
	
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}   
	getch();
}
