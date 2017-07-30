#include<stdio.h>
#include<conio.h>

int main()
{
	int n,str[100],m,frame[100],i,j,k,fault=0,top=-1;
	printf("Enter the no of characters in the string: ");
	scanf("%d",&n);	
	printf("Enter the string\n");
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	printf("Enter the no of frames: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	frame[i]=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(frame[j]==str[i])
			{			
				break;
			}
		}
		if(j==m)					// j will be equal to m if there is no match found for the character of string in frame
		{
			fault++;
			top=(top+1)%m;
			frame[top]=str[i];
		}
		printf("\n%d - ",str[i]);
		for(k=0;k<m;k++)
		{
			if(frame[k]!=-1)
			printf("%d ",frame[k]);	
		}
		if(j!=m)
		printf("  Page Hit");
	}
	printf("\n\nNo. of faults are: %d",fault);
	getch();
}
