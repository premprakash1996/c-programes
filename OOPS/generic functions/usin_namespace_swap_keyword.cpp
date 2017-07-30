#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
namespace swap
{
	template<class t>
void swap(t &x, t &y)
{
	t temp;
	temp=x;
	x=y;
	y=temp;
}
}

int main()
{
	int ia=5,ib=10;
	swap::swap(ia,ib);
	cout<<"After swapping \nInteger a="<<ia<<"\tInteger b="<<ib;
	float fa=5.5,fb=7.7;
	swap::swap(fa,fb);
	cout<<"\nFloat a="<<fa<<"\tFloat b="<<fb;
	double da=6.6,db=8.8;
	swap::swap(da,db);
	cout<<"\nDouble a="<<da<<"\tDouble b="<<db;
	char ca='A',cb='B';
	swap::swap(ca,cb);
	cout<<"\nCharacter a="<<ca<<"\tCharacter b="<<cb;
	getch();
}
