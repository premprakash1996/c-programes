#include<iostream>
#include<conio.h>
using namespace std;

int partition(char a[],int low,int high)
{
	int pi=low,i;
	char pivot=a[high];
	for(i=low;i<high;i++)
	{
		if(a[i]<=pivot)
		{
			swap(a[i],a[pi]);
			pi++;
		}	
	}
	swap(a[high],a[pi]);
	return pi;
}

void quicksort(char a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}

int main()
{
	char a[50];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"\n\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	getch();
}
