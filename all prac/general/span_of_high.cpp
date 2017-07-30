#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[20],n,count=1,max=0,i,j,span[20];
	
	cout<<"Enter total stocks: ";
	cin>>n;
	
	cout<<"Enter the stocks value";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n-1;i++){
		if(a[i+1]>a[i]){
			span[i]=count;
			count++;
		}
		else{
			span[i]=count;
			if(max<count)
				max=count;
			count=1;
		}
		cout<<"\nThe span till "<<i<<" index is: "<<span[i];
		if(i==n-2){
			span[i+1]=count;
			cout<<"\nThe span till "<<i+1<<" index is: "<<span[i+1];
		}
	}
	if(max<count)
		max=count;
	cout<<"\nThe maxmimum span of strictly high is: "<<max;
	getch();
}
