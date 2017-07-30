#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	
	string temp="abcde";
	char c='f';
	int p=temp.length();
	for(int i=0;i<p;i++){
		string m=temp.substr(0,i);
		string n=temp.substr(i,p-i);
		cout<<m+c+n<<endl;
	}
	cout<<temp+c;	
	
	getch();
}
