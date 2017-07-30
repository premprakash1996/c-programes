// Not working
#include<iostream>
#include<conio.h>
using namespace std;
int a[100];

void merge(int l[],int ln,int r[], int rn)
{
	int i=0,j=0;
	 int k=0;
	 cout<<"\n";
	while(i<ln && j<rn)
	{
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			cout<<a[k]<<" ";
			k++; i++;
		}	
		else
		{
			a[k]=r[j];
			cout<<a[k]<<" ";
			k++; j++;
		}
	}	
	while(i<ln)
	{
		a[k]=l[i];
		cout<<a[k]<<" ";
		k++; i++;
	}
	while(j<rn)
	{
		a[k]=r[j];
		cout<<a[k]<<" ";
		k++; j++;
	}
}

int mergesort(int b[],int n)
{
	int i;
	if(n<2)
	return 0;
	
	int mid=(n+1)/2;
	int l[mid],r[n-mid];
	for(i=0;i<mid;i++)
	{l[i]=b[i]; cout<<l[i]<<" ";}
	cout<<"           ";
	for(i=mid;i<n;i++)
	{r[i-mid]=b[i]; cout<<r[i-mid]<<" ";}
	cout<<"\n";
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(l,mid,r,n-mid);
	
}

int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,n);	
	cout<<"\nAfter merge\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	getch();
}
