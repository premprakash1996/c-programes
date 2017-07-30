#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b[10],bt[10],q,i,ta[10],wt[10],tot=0,f=0; 
	float t=0,w=0;
	printf("Enter the no of processes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		b[i]=bt[i];
		tot=tot+bt[i];
	}
	printf("Enter the quanta: ");
	scanf("%d",&q);
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
	printf("Waiting time: %f \nTurn around time: %f",w,t);
	getch();
}
