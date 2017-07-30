#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p[10],pr[10],bt[10],wt[10],ta[10],i,x,j; 
	float t=0,w=0;
	printf("Enter the no of processes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&bt[i],&pr[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(pr[j]>pr[j+1])
			{
				x=pr[j];
				pr[j]=pr[j+1];
				pr[j+1]=x;
				x=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=x;
				x=p[j];
				p[j]=p[j+1];
				p[j+1]=x;
			}
		}
	}
	wt[0]=0;
	for(i=0;i<n;i++)
	{
		if(i!=0)
		wt[i]=wt[i-1]+bt[i-1];
		ta[i]=wt[i]+bt[i];
		w=w+wt[i];
		t=t+ta[i];
	}
	for(i=0;i<n;i++)
		printf("The waiting time and turn around time for process %d is: %d and %d\n",p[i],wt[i],ta[i]);
	w=w/n;
	t=t/n;
	printf("\nThe Average waiting time is: %f\nThe Average turn around time is: %f",w,t);
	getch();
}
