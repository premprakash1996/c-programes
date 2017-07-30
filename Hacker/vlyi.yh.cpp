#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(char a[][11],int low,int high, int l)
{
	int pi=low,i;
	char pivot=a[l][high];
	for(i=low;i<high;i++)
	{
		if(a[l][i]<=pivot)
		{
			swap(a[l][i],a[l][pi]);
			pi++;
		}	
	}
	swap(a[l][high],a[l][pi]);
	return pi;
}

void quicksort(char a[][11],int low,int high, int l)
{
	if(low<high)
	{
		int pi=partition(a,low,high,l);
		quicksort(a,low,pi-1,l);
		quicksort(a,pi+1,high,l);
	}
}

int main() 
{
    int t,n,i,j,k;
    char a[11][11];
    cin>>t;
    while(t>0)
    {
        cin>>n;
        k=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];
        for(i=0;i<n;i++)
            quicksort(a,0,n-1,i);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j+1][i]<a[j][i])
                {
                    k=1;
                    cout<<"NO\n";
                    break;
                }
            }
            if(k==1)
                break;
        }
        if(k==0)
            cout<<"YES\n";
        t--;
    }
    return 0;
}
