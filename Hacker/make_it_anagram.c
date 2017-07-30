#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[10000],sh[10000];
    int i,m,n,k=0,a[26]={0},b[26]={0};
    scanf("%s",ch);
    m=strlen(ch);
    scanf("%s",sh);
    n=strlen(sh);
    for(i=0;i<m;i++)
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
    for(i=0;i<n;i++)
        {
            
        if(sh[i]=='a')
        b[0]++;
        else if(sh[i]=='b')
        b[1]++;        
        else if(sh[i]=='c')
        b[2]++;        
        else if(sh[i]=='d')
        b[3]++;        
        else if(sh[i]=='e')
        b[4]++;        
        else if(sh[i]=='f')
        b[5]++;        
        else if(sh[i]=='g')
        b[6]++;        
        else if(sh[i]=='h')
        b[7]++;        
        else if(sh[i]=='i')
        b[8]++;        
        else if(sh[i]=='j')
        b[9]++;        
        else if(sh[i]=='k')
        b[10]++;        
        else if(sh[i]=='l')
        b[11]++;        
        else if(sh[i]=='m')
        b[12]++;        
        else if(sh[i]=='n')
        b[13]++;        
        else if(sh[i]=='o')
        b[14]++;        
        else if(sh[i]=='p')
        b[15]++;        
        else if(sh[i]=='q')
        b[16]++;        
        else if(sh[i]=='r')
        b[17]++;        
        else if(sh[i]=='s')
        b[18]++;        
        else if(sh[i]=='t')
        b[19]++;        
        else if(sh[i]=='u')
        b[20]++;        
        else if(sh[i]=='v')
        b[21]++;        
        else if(sh[i]=='w')
        b[22]++;        
        else if(sh[i]=='x')
        b[23]++;        
        else if(sh[i]=='y')
        b[24]++;        
        else if(sh[i]=='z')
        b[25]++;              
        }
    for(i=0;i<26;i++)
        {
            k+=(abs(a[i]-b[i]));
        }
    printf("%d",k);
    return 0;
}
