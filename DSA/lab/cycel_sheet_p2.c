#include<conio.h>
#include<stdio.h>
#include<string.h>
struct account
{
	char name[10];
	char login_id[20];
	char password[20];
}a;
void enter()
{
	int i=0;
	printf("Name : ");scanf("%s",a.name);
	printf("Login ID : ");scanf("%s",a.login_id);
	printf("Password : ");
	do
	{
		a.password[i++]=getch();
		printf("*");
	}while(a.password[i-1]!=13);
	//printf("%s",a.password);
}
void check()
{
	char check_username[20],check_password[20];
	int i=0;
	printf("\n\nwelcome %s\n procees to login...\n",a.name);
	printf("Enter Login_ID :");scanf("%s",check_username);
	printf("enter password : ");
	do
	{
		check_password[i++]=getch();
		printf("*");
	}while(check_password[i-1]!=13);
	//printf("%s",check_password);
	if(strcmp(check_username,a.login_id)==0)
	{
		if(strcmp(check_password,a.password)==0)
		{
			printf("\nLogin successful...");
		}
		else printf("\nPassword incorrect!");
	}
	else printf("\nUsername incorrect!");
}
int main()
{
	enter();
	check();
	return 0;
}
