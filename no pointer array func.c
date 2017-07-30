#include<stdio.h>
#include<conio.h>
void nopoint(int j, int temp)
{
	int b[5],k;
	b[j]=temp;
	if(j==4)
	for(k=0;k<5;k++)
	{
	printf("%d",b[k]);
	}
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
