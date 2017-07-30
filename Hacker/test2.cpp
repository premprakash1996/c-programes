#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,a[500][500],b[500]={0},i,j,k=0,t,p=0,x=0;
        scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n-1;i++)
    {   
        t=i+1;
        while(t<n)
            {
                for(j=0;j<m;j++)
                {
                    if((a[i][j]==1)||(a[t][j]==1))   
                    b[p]++;                
                }
                if(b[p]>k)
                k=b[p];    
                p++;
                t++;
            }        
    }    
    for(i=0;i<p;i++)
        if(b[i]==k)
        x++;
    printf("%d\n%d",k,x);    
    return 0;
}
