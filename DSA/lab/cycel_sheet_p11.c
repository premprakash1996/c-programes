#include<conio.h>
#include<stdio.h>
int main()
{
	float key,temp=0;
	int choice=1,check_n,pos,n=0,i=0,j;
	float a[100];
	printf("enter the cgpa of students : ");
	while(choice==1)
	{
		printf("\nstudent %d : ",i+1);
			scanf("%f",&a[i]);
			i++;
		printf("\npress 1 enter more or break otherwise...");
		scanf("%d",&choice);n++;
	}
	for(i=0;i<n;i++)
		printf("%f\n",a[i]);
	
	//selection sort
	for(i=0;i<n;i++)
	{
		key=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(key>a[j])
				{key=a[j];pos=j;}
		}
		temp=a[i];
		a[i]=a[pos];	
		a[pos]=temp;
	}
	for(i=0;i<n;i++)
		printf("\n%f",a[i]);
	// nth greatest cgpa
	printf("\nenter n to find out the nth greatest cgpa :");	
	scanf("%d",&check_n);	
		
	printf("\n\n%dth greatest cgpa is %f",check_n,a[check_n-1]);
	
	return 0;
}
