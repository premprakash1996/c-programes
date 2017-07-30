#include<iostream>
#include<conio.h>
using namespace std;

void quicksort(int a[],int low,int high)
{
	if(low<high)
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
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}

int main() 
{
    int n,a[100000],i,j,max;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    max=1000000;
    i=0;
    j=1;
    while(i<n-1)
    {
        if(a[i+1]-a[i]==1)
            j++;
        else
        {
            if(j<max)
                max=j;
            j=1;
        }
        i++;
    }
    if(j<max)
    max=j;
    if(n==0)
	cout<<"0\n";    
	else
    cout<<max<<"\n";
        
	getch();
}
