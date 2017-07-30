#include<stdio.h>
#include<conio.h>
int a[50];
void merge(int l[],int r[],int n)
{
	int i=0,j=0,k=0,ln,rn;
	ln=n/2;
	rn=n-ln;
	while(i<ln&&j<rn)
	{
		if(l[i]>r[j])
			a[k++]=r[j++];
		else
			a[k++]=l[i++];
	}
	while(i<ln)
	a[k++]=l[i++];
	while(j<rn)
	a[k++]=r[j++];
}
void mergesort(int b[],int n)
{
	int mid,i;
	if(n<2)
	return;
	mid=n/2;
	int l[mid],r[n-mid];
	for(i=0;i<mid;i++)
	l[i]=b[i];
	for(i=mid;i<n;i++)
	r[i-mid]=b[i];
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(l,r,n);
}
void display(int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
int main()
{
	int n,i;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,n);
	display(n);
	getch();
}
