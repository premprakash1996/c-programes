#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	 int p,m,i,j,k=0,l=0;
	 char ch[100],word[10][20];
	 gets(ch);
	 p=strlen(ch);
	 for(i=0;i<=p;i++)
	 {
		if(ch[i]==' '||ch[i]=='\0')
		{
			for(j=k,m=0;j<i;j++,m++)
			word[l][m]=ch[j];
			l++;
			k=i+1;
		}
    }
	for(i=0;i<l;i++)
	{
		printf("word %d in opposite is : ",i+1);
		puts(strrev(word[i]));
	}
	getch();
}
