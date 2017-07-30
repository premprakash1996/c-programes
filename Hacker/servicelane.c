#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() 
{
    int n,tc,tc1,tc2,i,j,k;
    scanf("%d%d",&n,&tc);
    int ar[n],val[tc];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<tc;i++)
    {
        scanf("%d%d",&tc1,&tc2);
        for(j=tc1;j<=tc2;j++)
           {
                if(ar[j]==1)
                {
                    val[i]=1;
                    break;               
                }
                 
                else if(ar[j]==2)
                {
                    for(k=j;k<=tc2;k++)
                   { if(ar[k]!=1)
                        val[i]=2;                
                        else
                    {
                            val[i]=1;
                            break;
                    }      
                  
                   }
                    break;
                }
           
                else val[i]=3;
           } 
        printf("%d\n",val[i]);        
   
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    getch();
}
