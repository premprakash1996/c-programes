// Not working
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int a[100],n;

void merge(int l[],int r[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(l[i]<=r[j])
		a[k++]=l[i++];
		else
		a[k++]=r[j++];
	}
	while(i<=mid)
	a[k++]=l[i++];
	while(j<=high)
	a[k++]=l[j++];
	cout<<"\nMerged";
	for(i=low;i<=high;i++) 
	cout<<a[i];
}

void mergesort(int b[],int low,int high)
{
	if(high!=low)
	{
	
	int mid=(high+low)/2;
	
	int i,j,l[20],r[20];
	cout<<"\nLEFT";
	for(i=low;i<=mid;i++)
	{	
		l[i]=b[i];
		cout<<l[i];
	}
	cout<<"\nRIGHT";
	for(i=mid+1;i<=high;i++)
	{
		r[i]=b[i];
		cout<<r[i];
	}
	mergesort(l,low,mid);
	mergesort(r,mid+1,high);
	merge(l,r,low,mid,high);
	}
}

int main()
{
	int i;
	cout<<"Enter the no of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	cout<<"\n\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	getch();
	return 0;
}
