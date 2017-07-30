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
	int n;
	cin>>n;
	cout<<"\n"<<fact(n);
	getch();
}
