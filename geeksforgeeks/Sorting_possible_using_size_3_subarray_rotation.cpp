#include<iostream>
#include<conio.h>

int inversions=0;

using namespace std;

void merge(int a[], int left, int med, int right){
	int i,j,k,p[100],q[100];
	for(i=left;i<=med;i++)
		p[i]=a[i];
	for(i=med+1;i<=right;i++)
		q[i]=a[i];
	k=i=left;
	j=med+1;
	while(i<=med && j<=right){
		if(p[i]<=q[j]){
			inversions+=(k-left)-(i-left);
			a[k++]=p[i++];
			}
		else if(p[i]>q[j])
			a[k++]=q[j++];	
	}
	while(i<=med){
		inversions+=(k-left)-(i-left);
		a[k++]=p[i++];
	}
	while(j<=right)
		a[k++]=q[j++];			
}

void sort(int a[], int left, int right){
	int med=(left+right)>>1;
	if(left!=right){
		sort(a,left,med);
		sort(a,med+1,right);
		merge(a,left,med,right);
	}
}

int main(){
	int left=0;
	int a[100],n;
	cin>>n;
	int right=n-1;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,left,right);
	cout<<"Merged"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	cout<<endl<<inversions;
	cout<<endl<<endl;
	if(inversions%2==0)
		cout<<"Since the no of inversions are even therefore it is Possible";
	else
		cout<<"Since the no of inversions are odd therefore it is NOT Possible";	
	getch();
}
