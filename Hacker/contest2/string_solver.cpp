#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char a[100],b[100];
	int i,j,l;
	cin>>a;
	l=strlen(a);
	while(1)
	{
		j=0;
		for(i=0;i<l-1;i++)
		{
			if(a[i]==a[i+1])
			i++;
			else
			b[j++]=a[i];
		}
		if(i==l-1)
		b[j++]=a[l-1];
		if(j==l)
		break;
		for(i=0;i<j;i++)
		a[i]=b[i];
		l=j;
	}
	for(i=0;i<l;i++)
	cout<<b[i];
	if(l==0)
	cout<<"Empty String";
	getch();
}
