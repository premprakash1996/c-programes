#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t a=fork();
	if(a==-1)
	{
		printf("Fork not created\n");
	}
	else if(a==0)
	{
		printf("Child Process Created\n");
		int m=getpid();
		int n=getppid();
		printf("The parent id of the child process is: %d",m);
		printf("The parent process id of the child process is: %d",n);
	}
	else
	{
		printf("Parent process created\n");
		int m=pid;
		printf("The process id of the parent process is: %d",m);
	}
	return 0;
}
