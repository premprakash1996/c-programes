#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
            char a[1000];
			int l,j,val=0;
                scanf("%s",a);
                l=strlen(a);
                for(j=0;j<l/2;j++)
                    {
                       // if(a[j]>=a[l-j-1])
                        val=val+abs(a[j]-a[l-j-1]);                           
                        //else
                          // val=val+(a[l-j-1]-a[j]);
                }
                printf("%d\n",val);
        }
    getch();
}
