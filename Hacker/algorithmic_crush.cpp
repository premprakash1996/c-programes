#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	static long long int a[10000000]={0},k;
    int n,m,p,q,i,j,max=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>p>>q>>k;
        for(j=p;j<=q;j++)
        {
            a[j-1]=a[j-1]+k;
            if(a[j-1]>max)
                max=a[j-1];
        }
    }
    cout<<max;
    getch();
}
