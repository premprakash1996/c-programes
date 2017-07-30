// Working
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
	int t[100],i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		t[k++]=a[i++];
		else
		t[k++]=a[j++];
	}
	while(i<=mid)
	t[k++]=a[i++];
	while(j<=high)
	t[k++]=a[j++];
	for(i=low;i<=high;i++)
	a[i]=t[i];
}

void sort(int a[],int low,int high)
{
	if(low!=high)
	{
		int mid=(low+high)/2;
		sort(a,low,mid);
		sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

int main()
{
	
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,0,n-1);	
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	getch();
}
