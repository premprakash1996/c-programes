#include<stdio.h>
#include<conio.h>
#include<string.h>
void name(char str[20],int k)
{
	int i,count[6]={0,0,0,0,0,0};
	for(i=0;i<k;i++)
	{
		if(str[i]=='a')
		count[0]++;
		else if(str[i]=='e')
		count[1]++;
		else if(str[i]=='i')
		count[2]++;
		else if(str[i]=='o')
		count[3]++;
		else if(str[i]=='u')
		count[4]++;
	}
		count[5]=count[0]+count[1]+count[2]+count[3]+count[4];
printf("a or A=%d\ne or E=%d\ni or I=%d\no or O=%d\nu or U=%d\nTotal Vowels = %d",count[0],count[1],count[2],count[3],count[4],count[5]);	
}
int main()
{
	char ch[20]; 
	int l;
	gets(ch);
	l=strlen(ch);
	name(ch,l);
	getch();
}
