#include<stdio.h>
#include<conio.h>
int main()
{
	int n,v,i,j,d[100000]={0},l=0,t,k=1;
	while(k==1)
	{
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the n values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);			
	}
	printf("Enter\n1 to check duplicacy \n2 for right to left overwriting \n3 for left to right overwriting\n");
	scanf("%d",&t);
	switch(t)
	{	
	case 1:
	{
		for(i=0;i<n;i++)
	{
		d[a[i]]++;
		if(d[a[i]]==2)
		printf("Element %d is duplicated\n",a[i]);
	}
	break;
	}	
	
	case 2:
	{
	printf("Enter the value to be searched:\n");	
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		l++;	
	}
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
			for(j=i;j<n-1;j++)	
			a[j]=a[j+1];
			if(i<n-l)
			i--;
		}
	}
	printf("The new array after deletion:\n");
	for(i=0;i<n-l;i++)
	printf("%d\n",a[i]);	
	break;
	}
	
	case 3:
	{
	printf("Enter the value to be searched:\n");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		l++;	
	}
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
			for(j=i;j>0;j--)
			a[j]=a[j-1];	
		}	
	}
	printf("The new array after deletion:\n");
	for(i=l;i<n;i++)
	printf("%d\n",a[i]);	
	break;
	}
	
	default : 
	{
	printf("Enter the correct choice\n");
	break;
	}
	}
	k=0;
	printf("Enter 1 to continue:\n");
	scanf("%d",&k);
	}
	getch();
}
