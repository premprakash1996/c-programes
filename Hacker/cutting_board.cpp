#include<iostream>
#include<conio.h>
using namespace std;

void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
	//	int pi=partition(a,low,high);
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
    int t,m,n,i,j,p,q;
    static long long int h[1000000],v[1000000];
    long long int cost,mod=1000000007;
    cin>>t;
    while(t>0)
    {
        cin>>m>>n;
        for(i=0;i<m-1;i++)
            cin>>h[i];
        for(i=0;i<n-1;i++)
            cin>>v[i];
        cost=0;
        quicksort(h,0,m-2);
        quicksort(v,0,n-2);
        p=1;
        q=1;
        i=m-2;
        j=n-2;
        while(i>=0 && j>=0)
        {
            if(h[i]>=v[j])
            {
                cost=cost+h[i]*q;
                i--;
                p++;
            }
            else
            {
                cost=cost+v[j]*p;
                j--;
                q++;
            }   
        }
        while(i>=0)
        {
            cost=cost+h[i]*q;
            i--;
        }
        while(j>=0)
        {
            cost=cost+v[j]*p;
            j--;
        }
        cost=cost%mod;
        cout<<cost<<"\n";
        t--;
    }
   
    getch();
}
