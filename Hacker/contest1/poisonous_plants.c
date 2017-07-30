#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100000],t,i,j,k=0,l,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(x!=0)
	{
		for(i=0;i<n-1;i++)
		{
		x=0;
		if(a[i+1]>a[i])
		{	
			t=++i;
			l=1;	
			x=1;
			while(a[i+1]>a[i])
			{
				l++; i++;
			}
			n=n-l;	
			for(j=t;j<n;j++)
				a[j]=a[j+l];
		}
		}	
	if(x==1)
	k++;
	}
	printf("%d",k);
	getch();
}
