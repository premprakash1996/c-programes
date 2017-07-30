#include<conio.h>
#include<stdio.h>
void main()
{
	int choice=1,i=0,j,n=0;
	float a[100],key;
	while(choice==1)
	{
			scanf("%f",&a[i]);
		i++;n++;
		printf("\npress 1 enter more or break otherwise...");
		scanf("%d",&choice);
	}
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>-1&&a[i]<key)
		{
			a[i+1]=a[i];
			i--;
			
		}
		a[i+1]=key;
	}
printf("\n");
	for(i=0;i<n;i++)
		printf("%f\n",a[i]); 
}
