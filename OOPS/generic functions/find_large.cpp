#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
template<class t>

t flarge(t *a, int n)
{
	t temp;
	int i;
	temp=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>temp)
		temp=a[i];
	}
	return temp;
}

int main()
{
	int ia[100],n,i;
	float fa[100];
	char ca[100];
	cout<<"Enter the no of elements";
	cin>>n;
	cout<<"\nElements for int type:\n";
	for(i=0;i<n;i++)
	cin>>ia[i];
	cout<<flarge(ia,n);
	cout<<"\nElements for float type:\n";
	for(i=0;i<n;i++)
	cin>>fa[i];
	cout<<flarge(fa,n);
	cout<<"\nElements for character type:\n";
	for(i=0;i<n;i++)
	cin>>ca[i];
	cout<<flarge(ca,n);
	getch();
}
