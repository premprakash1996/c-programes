#include<stdio.h>
#include<conio.h>
void input()  
{
 static int c=3;                  
 c=c+4;
 printf("%d\n",c);  
}
int main() 
{  
	input();
	input();
	getch();	
}
