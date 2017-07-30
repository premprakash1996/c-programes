#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	
	vector <int> v(8);
	vector <int> v1(8);
	int x;
	for(int i=0;i<5;i++)
	{cin>>x;
	v.push_back(x);}
	 
	
/*	for(int i=0;i<5;i++)
	{cin>>x; v[i]=x;}*/
	
	v1=v;
	cout<<v.size()<<endl;
	cout<<v1.size()<<endl;
	for(int i=0;i<5;i++)
	cout<<v1[i];
	getch();
}
