#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

int main() {

     int n;
        n=2*pow(10,1);
     int a[n][5];
     int i,j,k,r,c,x=0;
    for(i=n-1;i>0;i=i-2)
        for(j=0;j<5;j++)
        for(k=i;k>=(i-1);k--)
        {a[k][j]=x++; }
    for(i=0;i<n;i++)
	{	for(j=0;j<5;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
		}    
    scanf("%d%d",&r,&c);
        printf("%d",a[n-r][c-1]);
    getch();
}
