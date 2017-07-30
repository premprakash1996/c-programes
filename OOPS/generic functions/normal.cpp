#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
template<class t>

void gswap(t &x, t &y)
{
	t temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int ia=5,ib=10;
	gswap(ia,ib);
	cout<<"After swapping \nInteger a="<<ia<<"\tInteger b="<<ib;
	float fa=5.5,fb=7.7;
	gswap(fa,fb);
	cout<<"\nFloat a="<<fa<<"\tFloat b="<<fb;
	double da=6.6,db=8.8;
	gswap(da,db);
	cout<<"\nDouble a="<<da<<"\tDouble b="<<db;
	char ca='A',cb='B';
	gswap(ca,cb);
	cout<<"\nCharacter a="<<ca<<"\tCharacter b="<<cb;
	getch();
}
