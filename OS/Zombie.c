#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t a=fork();
	if(a==-1)
	{
		printf("Fork failed");
	}
	else if(a==0)
	{
		printf("\nChild process finished immediately");
	}
	else
	{
		printf("\nParent process created");
		sleep(5);
		printf("\nParent process still goin on.. ");
		sleep(2);
		printf("\nParent process now exiting");
	}
	return 0;
}
