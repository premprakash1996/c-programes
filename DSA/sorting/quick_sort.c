#include<stdio.h>
#include<conio.h>

int partition(int a[], int low, int high)
{
	int temp,i=low,pivot=a[high],pi=low;
	for(i=low;i<=high;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[pi];
			a[pi]=a[i];
			a[i]=temp;
			pi++;
		}	
	}	
	return (pi-1);
}

void quicksort(int a[], int low, int high)
{
	int q;
	if(low<high)
	{
		q=partition(a,low,high);
		quicksort(a,low,q);
		quicksort(a,q+1,high);
	}
}

int main()
{
	int a[100],n,i;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}
