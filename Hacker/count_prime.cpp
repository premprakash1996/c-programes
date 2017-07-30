#include<iostream>
#include<conio.h>
using namespace std;

int prime(int a)
{
    int p=0,i,j;
    for(j=2;j<=a;j++)
    {
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                break;	
            } 	
        }
        if(i==((j/2)+1))
        p++;
    }
    return p;
}

int main()
{
	int n;
	cin>>n;
	cout<<"\n"<<prime(n);
	getch();
}
