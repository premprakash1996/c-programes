#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int t,i,j,n,x,y,a[200000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        x=n;
        y=1;
        for(j=n-1;j>=0;j-=2)
        {
            a[j]=x--;
            if(j>=1)
            a[j-1]=y++;
        }
        for(j=0;j<n;j++)
        { 
            printf("%d ",a[j]);
            
        }
            printf("\n");
    }
    getch();
}
