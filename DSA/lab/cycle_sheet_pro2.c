#include<conio.h>
#include<stdio.h>
#include<string.h>
struct employee
{
	char name[10];
	char emp_id[20];
	char designation[20];
	float salary;
}e[100];
int enter_details()
{
	int i=0,choice=1,size;
	while(choice==1)
	{
	printf("Enter the details of employee %d\n",i+1);
	printf("Name : ");scanf("%s",e[i].name);
	printf("Employee ID : ");scanf("%s",e[i].emp_id);
	printf("designation : ");scanf("%s",e[i].designation);
	printf("Salary : ");scanf("%f",&e[i].salary);
	printf("Press 1 to enter more or break otherwise : ");scanf("%d",&choice);
	i++;
	}
	size=i;
return size;
}
void print_employee(int n)
{
	char check_emp_id[20];
	int i=0;
	printf("enter the employee ID : ");scanf("%s",check_emp_id);
	for(i=0;i<n;i++)
	{
		if(strcmp(check_emp_id,e[i].emp_id)==0)
			{
					printf("Details of employee %d :\n",i+1);
					printf("Name : %s",e[i].name);
					printf("\nEmployee ID : %s",e[i].emp_id);
					printf("\ndesignation : %s",e[i].designation);
					printf("\nSalary : %f",e[i].salary);
			}
	}
getch();
}
int main()
{
	int val;
	val=enter_details();
	print_employee(val);
	return 0;
}
