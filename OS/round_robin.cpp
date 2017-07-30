#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,b[10],bt[10],q,i,ta[10],wt[10],tot=0,f=0; 
	float t=0,w=0;
	cout<<"Enter the no of processes: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>bt[i];
		b[i]=bt[i];
		tot=tot+bt[i];
	}
	cout<<"Enter the quanta: ";
	cin>>q;
	while(f<tot)
	{
		for(i=0;i<n;i++)
		{
			if(bt[i]>q)
			{
				f=f+q;
				bt[i]=bt[i]-q;
			}
			else if(bt[i]>0)
			{
				f=f+bt[i];
				bt[i]=0;
				ta[i]=f;
				wt[i]=f-b[i];
				w=w+wt[i];
				t=t+ta[i];
			}
		}	
	}
	w=w/n;
	t=t/n;
	cout<<"Waiting time: "<<w<<"\nTurn around time: "<<t;
	getch();
}
