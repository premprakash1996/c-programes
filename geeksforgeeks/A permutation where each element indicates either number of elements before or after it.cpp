#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n,x;
	cin>>n;
	x=(n-1)/2;
	int i,a[n],b[x];
	for(i=0;i<=x;i++) b[i]=0; 
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=x)
			b[a[i]]++;
		else if(a[i]<=n-1)
			b[n-1-a[i]]++;
		else{
			cout<<"Not Possible at all";
			getch();
			return 0;
		}
	}
	if(n%2!=0) b[x]++;
	for(i=0;i<=x;i++){
		if(b[i]!=2){
			cout<<"Not Possible";
			getch();
			return 0; 
		}
	}
	cout<<"Yes it is possible with a permutations";
	getch();
}
