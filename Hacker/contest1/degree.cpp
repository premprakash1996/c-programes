#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

int main() 
{
    int t,i,n,m,q,r,o,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        q=m/n;
        r=m%n;
        if(n%2==0)
        {
            if(r==0)
            {
                o=(n/2)+1;
                d=q-1;
            }
            else 
            {   
                d=q;
                if(r%2==0)
                    o=n+1-(r/2);    
                else
                    o=(r/2)+1;
            }
        }
        else
        {
            if(r==0)
            {
                o=n/2+1;
                d=q-1;
            }
            else
            {
                d=q;
                if(q%2==0)
                {
                    if(r%2==0)
                        o=n+1-(r/2);
                    else
                        o=(r/2)+1;
                }
                else
                {
                    if(r%2==0)
                        o=r/2;
                    else
                        o=n-r/2;
                }    
            }
        }
    printf("%d %d\n",o,d);
    }
    getch();
}
