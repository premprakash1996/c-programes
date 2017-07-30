#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	
	vector <int> v;
	int x;
/*	for(int i=0;i<5;i++)
	{cin>>x;
	v.push_back(x);}
	 */
	
	for(int i=0;i<5;i++)
	{cin>>x; v[i]=x;}
	
	cout<<v.size();
	for(int i=0;i<5;i++)
	cout<<v[i];
	getch();
}
