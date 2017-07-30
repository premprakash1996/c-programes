#include<stdio.h>
#include<conio.h>
#include<string.h>
void name(char ch[20],int l)
{
	int i,count[6]={0,0,0,0,0,0};
	for(i=0;i<l;i++)
	{
		if(ch[i]=='a'||ch[i]=='A')
		count[0]++;
		else if(ch[i]=='e'||ch[i]=='E')
		count[1]++;
		else if(ch[i]=='i'||ch=='I')
		count[2]++;
		else if(ch[i]=='o'||ch=='O')
		count[3]++;
		else if(ch[i]=='u'||ch=='U')
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
