#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int t,i;
    int p[29]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
   scanf("%d",&t);
      
    for(i=0;i<t;i++)
        {
        char ch[500];
        int l,j,k=0,m,a[29]={0};
   
         
            
        scanf(" %[^\t\n]s",ch);
        l=strlen(ch);
        for(j=0;j<l;j++)
        {
            if(ch[j]==' ')
            k++;    
            else
                (a[k])++;        
        }
        for(m=0;m<=k;m++)
        {
            if(a[m]!=p[m])    
            {   
                printf("It's not a pi song.\n");
                break;                    
            }        
        }
   
       
         if(m==(k+1))
        printf("It's a pi song.\n");
    }

    getch();
}
