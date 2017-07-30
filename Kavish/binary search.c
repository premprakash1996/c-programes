#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,s,middle,first=0,last=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	middle=(first+last)/2;
	scanf("%d",&s);
	while(first<=last)
	{
		if(s>a[middle])
		first=middle+1;
		else if(s==a[middle])
		{
			printf("%dfound at pos %d",s,middle+1);
			break;
	    }
		else last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Sorry");	
	}	
	getch();
}
