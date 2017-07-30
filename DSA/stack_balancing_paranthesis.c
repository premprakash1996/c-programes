#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct 
{
	char a[20];
	int top;
}stack;

void push(stack *s,char c)
{
	s->top++;
	s->a[s->top]=c;
}

int pop(stack *s,char c)
{
	if(s->top<=-1)
	{printf("The set is not balanced");
	return 1;
    }
	else if((c-s->a[s->top]==1) || (c-s->a[s->top]==2)) 
	{s->top--; return 0;}
	else
	{printf("The set is not balanced");
	return 1;
    }
}

int main()
{
	stack s;
	int j,k,i=0;
	char c[20];
	scanf("%s",c);
	k=strlen(c);
	s.top=-1;
	if(k%2==1)
	printf("The given set is not balanced");
	else
	{
	while(i<k)
	{
		if(c[i]==40 || c[i]==91 || c[i]==123)
		push(&s,c[i]);
		else if(c[i]==41 || c[i]==93 || c[i]==125)
		{j=pop(&s,c[i]);
	     if(j==1)
	     break;
		}
		else 
		{printf("Enter expression in crrct format\n"); break;}	
		i++;
	}
	if(s.top==-1&&i==k)
	printf("The given set is balanced");
	else if(i==k)
	printf("The given set is not balanced");		
	}	
	getch();
}
