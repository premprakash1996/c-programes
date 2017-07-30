#include<stdio.h>
#include<conio.h>
int main()
{
   printf("\n\n\n\n\t\t\tREVERSE THE NUMBER");
   int num,rnum;
   printf("\n\n\n\t\tEnter the number to be reversed : ");
   scanf("%d",&num);
   printf("\n\n\t\tThe reversed number is : ");
   while(num!=0)
   {  
		rnum=num%10;
		printf("%d",rnum);
		num=num/10;
	}
	getch();
}
