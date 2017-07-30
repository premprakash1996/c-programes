#include<stdio.h>
#include<conio.h>
int main()
{
	int n,bt[10],wt[10],ta[10],i; 
	float t=0,w=0;
	printf("Enter the no of processes: ");
	scanf("%d",&n);
	wt[0]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		if(i!=0)
		wt[i]=wt[i-1]+bt[i-1];
		ta[i]=wt[i]+bt[i];
		w=w+wt[i];
		t=t+ta[i];
	}
	for(i=0;i<n;i++)
		printf("The waiting time and turn around time for process %d is: %d and %d\n",i+1,wt[i],ta[i]);
	w=w/n;
	t=t/n;
	printf("\nThe Average waiting time is: %f\nThe Average turn around time is: %f",w,t);
	getch();
}
