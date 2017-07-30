#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,r,d,d1,r1,r2;
	printf("Enter a and the power it is raised to and b and c also for the quadratic in form of ax^2 + bx + c : \n");
	scanf("%f%f%f%f%f%f",&a,&p,&b,&q,&c,&r);
	a=pow(a,p);
	b=pow(b,q);
	c=pow(c,r);
	d1=(b*b)-(4*a*c);
	if(a==0)
	{
		r1=-c/b;
		printf("The root of the linear equation is  ");
	}
	 else if(d1>0)
	{
		d=sqrt(d1);
		r1=(-b+d)/(2*a);	
		r2=(-b-d)/(2*a);	
		printf("The first root of the given equation is  : %f\n",r1);
		printf("The second root of the given equation is : %f",r2);
	}
	else if(d1==0)
	{
		r1=(-b/(2*a));
		printf("The only root the equation is : %f",r1);					
	}
	else if(d1<0)
	{
		d=sqrt(-d1);
		r1=(-b/(2*a));	
		printf("The first root of the given equation is  : %f+%fi\n",r1,(d/(2*a)));
		printf("The second root of the given equation is : %f-%fi",r1,(d/(2*a)));
	}
	getch();
}
