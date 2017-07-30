#include<iostream>
#include<conio.h>
using namespace std;

int fact(int a)
{
    if(a==0 || a==1)
        return 1;
    while(a>=2)
        return a*fact(a-1);
        return 1;
}

int main()
{
	int n,x,i,total;
	 cin>>n;
        x=n/4;
        total=0;
        for(i=0;i<=x;i++)
        {
            total=total+(fact((n-i*4)+i)/(fact(n-i*4)*fact(i)));
        }
        cout<<total;
	getch();
}
