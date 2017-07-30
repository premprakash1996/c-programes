#include<stdio.h>
#include<conio.h>
struct stack
{
	char a[20];
	int top;
}s;
int isfull()
{
	if(s.top==19)
	return 1;
	else
	return 0;
}
void push(int n)
{
	if(isfull())
	printf("The stack is full.\n");
	else
	{
		s.top++;
		if(n<=9)
		s.a[s.top]=48+n;
		else
		s.a[s.top]=55+n;
	}
}
void view(int num1,int b)
{
	int i;
	printf("The value of the %d in the base %d is :\n",num1,b);
	for(i=s.top;i>=0;i--)
	printf("%c",s.a[i]);
}
int main()
{
	int num,num1,n,x=1,b;
	while(x!=0)
	{
	s.top=-1;
	printf("Enter the number in decimal form : ");
	scanf("%d",&num);
	num1=num;
	printf("Enter the base in which you want the answer :\n");
	scanf("%d",&b);
				while(num>0)
				{
				n=num%b;
				push(n);
				num=num/b;
				}
				view(num1,b);
	printf("\nPress any key axcept 0 to continue,otherwise press 0\n");
	scanf("%d",&x);
	}	
}
