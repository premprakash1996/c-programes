#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50]; 
	int i=0,n,j,k;
	printf("Enter the string\n");
	gets(a);
	while(a[i]!='\0')
	i++;
	n=i;
	for(j=0;j<n;j++)
	b[j]=a[n-j-1];
	printf("The reversed string using string function\n");
	puts(strrev(a));
	printf("The reversed string without using string function\n");
	for(k=0;k<n;k++)
	printf("%c",b[k]);
	getch();
}
