#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    char ch[100001];
    int i,l,a[25]={0},m=0;
    scanf("%s",ch);
    l=strlen(ch);
     for(i=0;i<l;i++)
        {
        if(ch[i]=='a')
        a[0]++;
        else if(ch[i]=='b')
        a[1]++;        
        else if(ch[i]=='c')
        a[2]++;        
        else if(ch[i]=='d')
        a[3]++;        
        else if(ch[i]=='e')
        a[4]++;        
        else if(ch[i]=='f')
        a[5]++;        
        else if(ch[i]=='g')
        a[6]++;        
        else if(ch[i]=='h')
        a[7]++;        
        else if(ch[i]=='i')
        a[8]++;        
        else if(ch[i]=='j')
        a[9]++;        
        else if(ch[i]=='k')
        a[10]++;        
        else if(ch[i]=='l')
        a[11]++;        
        else if(ch[i]=='m')
        a[12]++;        
        else if(ch[i]=='n')
        a[13]++;        
        else if(ch[i]=='o')
        a[14]++;        
        else if(ch[i]=='p')
        a[15]++;        
        else if(ch[i]=='q')
        a[16]++;        
        else if(ch[i]=='r')
        a[17]++;        
        else if(ch[i]=='s')
        a[18]++;        
        else if(ch[i]=='t')
        a[19]++;        
        else if(ch[i]=='u')
        a[20]++;        
        else if(ch[i]=='v')
        a[21]++;        
        else if(ch[i]=='w')
        a[22]++;        
        else if(ch[i]=='x')
        a[23]++;        
        else if(ch[i]=='y')
        a[24]++;        
        else if(ch[i]=='z')
        a[25]++;        
        }
    if(l%2==0)
    {  
        for(i=0;i<26;i++)
            {
                if(a[i]%2!=0)
                {
                    printf("NO");
                    break;
                }
            }
        if(i==26)
        printf("YES");            
    }
    else if(l%2!=0)
    {
        for(i=0;i<26;i++)
           {
              if(a[i]%2!=0)       
                {
                    m++;  
                }            
           }
        if(m!=1)
            printf("NO");
        else printf("YES");
    }
    return 0;
}
