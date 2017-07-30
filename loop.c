#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=1;
	for(i=1;i<=27;i++)
	{
		if(i<=10)
		printf("%4d",i);	
		else if(i>10&&i<19)
		{
			printf("\n%40d",i);	
		}	
		else
		{
			printf("%*d",(10-(j)),i);
			j++;
		}
	}
getch();
}
