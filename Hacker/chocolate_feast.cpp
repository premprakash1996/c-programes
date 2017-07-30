#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,m,c,i,j,r,t;
	cin>>n>>c>>m;
	t=n/c;
	r=t;
	while(r>=m)
	{
		t=t+r/m;
		r=r/m+(r%m);
	}
	cout<<t;
	getch();
}
