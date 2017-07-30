/*
// O(n3), naive method
#include<iostream>
#include<conio.h>

using namespace std;

void triplet(int a[100], int n){
	int found=0;
	cout<<"the triplets : ";
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]==0){
					cout<<a[i]<<"  "<<a[j]<<"  "<<a[k]<<endl;	
					found=1;
				}
			}
		}
	}
	if(found==0)
	cout<<"Not found";
}

int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	triplet(a,n);
	
	getch();
}
*/


/*
// O(n2) time & O(n) space, hashing method
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

void triplet(int a[], int n){
	int i,j,k,x,found=0;
	cout<<"The triplets are: ";
	
	for(i=0;i<n-1;i++){
		unordered_set<int> s;
		for(j=i+1;j<n;j++){
			x=-(a[i]+a[j]);
			if(s.find(x)!=s.end){
				cout<<x<<"  "<<a[i]<<"  "<<a[j]<<endl;	
				found=1;
			}
			else
			s.insert(a[j]);
		}
	}
	if(found==0)
	cout<<"not found";

}

int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	triplet(a,n);
	
	getch();
}
*/



// O(n2) time & O(1) space, sorting method
#include<iostream>
#include<conio.h>

using namespace std;

int partition(int a[],int low,int high)
{
	int pi=low,i,pivot=a[high];
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

void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}

void triplet(int a[], int n){
	int found=0,x,l,r;
	cout<<"the triplets : ";
	quicksort(a,0,n-1);
	for(int i=0;i<n-2;i++){
		l=i+1;
		r=n-1;
		while(l<r){
			x=a[i]+a[l]+a[r];
			if(x==0){
				cout<<a[i]<<"  "<<a[l]<<"  "<<a[r]<<endl;
				l++;
				r--;
				found=1;
			}
			else if(x<0)
			l++;
			else
			r--;			
		}
	}
	if(found==0)
	cout<<"Not found";
}

int main()
{
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	triplet(a,n);
	
	getch();
}


