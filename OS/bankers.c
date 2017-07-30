#include<stdio.h>
#include<conio.h>

int main()
{
	int p,r,proc[10]={0},alloc[10][10],max[10][10],need[10][10],avail[10][10],x[10],i,j,lock,count=0;
	printf("Enter the no of processes: ");
	scanf("%d",&p);
	printf("Enter the no of resources: ");
	scanf("%d",&r);
	printf("Enter the allocation matrix\n");
	for(i=0;i<p;i++)
	for(j=0;j<r;j++)
	scanf("%d",&alloc[i][j]);
	printf("Enter the max matrix\n");
	for(i=0;i<p;i++)
	for(j=0;j<r;j++)
	{
		scanf("%d",&max[i][j]);
		need[i][j]=max[i][j]-alloc[i][j];
	}
	printf("Enter the initial resources");
	for(i=0;i<r;i++)
	scanf("%d",&x[i]);
	
	while(count<p)
	{
		lock=0;
		for(i=0;i<p;i++)	
		{
			if(proc[i]==0)
			{
				for(j=0;j<r;j++)	
				{
					if(need[i][j]>x[j])
					break;
				}
				if(j==r)
				{
					lock=1;
					proc[i]=1;
					printf("Process %d executed.....\n",i+1);	
					count++;
					for(j=0;j<r;j++)
					{
						avail[i][j]=x[j];
						x[j]=x[j]+alloc[i][j];
					}
				}			
			}
		}
		if(lock==0)
		{
			printf("Not sufficient resources!!!");	
			break;
		}
	}
			// FROME HERE.. IT IS JUST TO SHOW OUTPUT IN A TABLE FORM.. SO NOT IMPORTANT
	
	printf("\n\nProcess\t   Alloc\tMax\tAvail\tNeed\n");
	for(i=0;i<p;i++)
	{
		printf("Process %d",i+1);
		printf("   ");
		for(j=0;j<r;j++)	
		printf("%d ",alloc[i][j]);
		printf("\t");
		for(j=0;j<r;j++)	
		printf("%d ",max[i][j]);
		printf("\t");
		for(j=0;j<r;j++)	
		{
			if(proc[i]==0)
			printf("- ");
			else
			printf("%d ",avail[i][j]);
		}
		printf("\t");
		for(j=0;j<r;j++)	
		printf("%d ",need[i][j]);
		printf("\n");
	}
	getch();
}
