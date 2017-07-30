#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,a[500][500],i,j,k=0,t,p=0,x=0;
        scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n-1;i++)
    {   
        for(t=i+1;t<n;t++)
            {
                k=0;
                for(j=0;j<m;j++)
                {
                    if(a[i][j]+a[t][j]>=1)   
                    k++;                
                }
                if(k>p)
                {
                    p=k;    
                    x=1;        
                }  
                else if(k==p)
                    x++;   
            }
     
    }    
    printf("%d\n%d",p,x);    
    getch();
}
