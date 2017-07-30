#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

void change (vector <int> v){
	v[0]=17;
}

void display(vector <int> v){
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
}

int main(){
	vector <int> v(20);
	v[0]=3;
	v[1]=2;
	cout<<v[0]<<v[1]<<v.size()<<sizeof(v)<<endl;
	display(v);
	change (v);
	display(v);
	getch();
}
