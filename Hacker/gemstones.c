#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char ch[100][100];
    int l[100],n,i,j,k=0,a[100][26]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%s",ch[i]);
        l[i]=strlen(ch[i]);
        }
    for(j=0;j<n;j++)
        {
    for(i=0;i<l[j];i++)
        {
            if(ch[j][i]=='a')
        a[j][0]=1;
        else if(ch[j][i]=='b')
        a[j][1]=1;        
        else if(ch[j][i]=='c')
        a[j][2]=1;        
        else if(ch[j][i]=='d')
        a[j][3]=1;        
        else if(ch[j][i]=='e')
        a[j][4]=1;        
        else if(ch[j][i]=='f')
        a[j][5]=1;        
        else if(ch[j][i]=='g')
        a[j][6]=1;        
        else if(ch[j][i]=='h')
        a[j][7]=1;        
        else if(ch[j][i]=='i')
        a[j][8]=1;        
        else if(ch[j][i]=='j')
        a[j][9]=1;        
        else if(ch[j][i]=='k')
        a[j][10]=1;        
        else if(ch[j][i]=='l')
        a[j][11]=1;        
        else if(ch[j][i]=='m')
        a[j][12]=1;        
        else if(ch[j][i]=='n')
        a[j][13]=1;        
        else if(ch[j][i]=='o')
        a[j][14]=1;        
        else if(ch[j][i]=='p')
        a[j][15]=1;        
        else if(ch[j][i]=='q')
        a[j][16]=1;        
        else if(ch[j][i]=='r')
        a[j][17]=1;        
        else if(ch[j][i]=='s')
        a[j][18]=1;        
        else if(ch[j][i]=='t')
        a[j][19]=1;        
        else if(ch[j][i]=='u')
        a[j][20]=1;        
        else if(ch[j][i]=='v')
        a[j][21]=1;        
        else if(ch[j][i]=='w')
        a[j][22]=1;        
        else if(ch[j][i]=='x')
        a[j][23]=1;        
        else if(ch[j][i]=='y')
        a[j][24]=1;        
        else if(ch[j][i]=='z')
        a[j][25]=1;        
        
            }
        }
    for(i=0;i<26;i++)
        {
        for(j=0;j<n;j++)
            {
                if(a[j][i]==0)
                    break;
            }
        if(j==n)
            k++;
        
        }
    printf("%d",k);
    return 0;
}
