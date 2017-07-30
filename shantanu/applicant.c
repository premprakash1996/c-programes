#include<stdio.h>
#include<conio.h>
struct regno
{
	char uname[20],addr[30],email[20],pswrd[8],cpswrd[8];
	long int pno; 
}app[5]; 
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t\tEnter the details of %d applicant\n",i+1);
		printf("Enter the username\n");
		gets(app[i].uname);
		printf("Enter the address\n");
		gets(app[i].addr);
		printf("Enter the phone no.\n");		
		scanf("%ld",&app[i].pno);
		printf("Enter the email id\n");
		gets(app[i].email);
		printf("Enter the password\n");
		gets(app[i].pswrd);
		printf("Enter the password again to confirm\n");
		gets(app[i].cpswrd);			
	}

	for(i=0;i<5;i++)
	{
		printf("\n\t\tThe details of %d applicant\n",i+1);
		printf("The username is\n");
		puts(app[i].uname);
		printf("The address is\n");
		puts(app[i].addr);
		printf("The phone no. is\n");		
		printf("%ld",app[i].pno);
		printf("The email id is\n");
		puts(app[i].email);
		printf("The password is\n");	
		printf("******");
	}
	getch();
}
