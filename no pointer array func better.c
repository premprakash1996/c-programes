#include<stdio.h>
#include<conio.h>
void nopoint(int j, int b[j])
{
	int k;
	for(k=0;k<=j;k++)
	{
	printf("%d",b[k]);
	}
	printf("\n");
}
int main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	nopoint(i,a[i]);
	
	getch();
}
