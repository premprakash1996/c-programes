#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main(){
	vector< vector <int> > v(5, vector<int> (5));
	v[0][0]=3;
	v[1][0]=2;
	cout<<v[0][0]<<v[1][0]<<endl;
	getch();
}
