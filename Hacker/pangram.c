#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[1000];
    int a[26]={0},l,i,j;
    scanf(" %[^\t\n]s",ch); 
    l=strlen(ch);
    for(i=0;i<l;i++)
        {
        if(ch[i]=='a'||ch[i]=='A')
        a[0]=1;
        else if(ch[i]=='b'||ch[i]=='B')
        a[1]=1;        
        else if(ch[i]=='c'||ch[i]=='C')
        a[2]=1;        
        else if(ch[i]=='d'||ch[i]=='D')
        a[3]=1;        
        else if(ch[i]=='e'||ch[i]=='E')
        a[4]=1;        
        else if(ch[i]=='f'||ch[i]=='F')
        a[5]=1;        
        else if(ch[i]=='g'||ch[i]=='G')
        a[6]=1;        
        else if(ch[i]=='h'||ch[i]=='H')
        a[7]=1;        
        else if(ch[i]=='i'||ch[i]=='I')
        a[8]=1;        
        else if(ch[i]=='j'||ch[i]=='J')
        a[9]=1;        
        else if(ch[i]=='k'||ch[i]=='K')
        a[10]=1;        
        else if(ch[i]=='l'||ch[i]=='L')
        a[11]=1;        
        else if(ch[i]=='m'||ch[i]=='M')
        a[12]=1;        
        else if(ch[i]=='n'||ch[i]=='N')
        a[13]=1;        
        else if(ch[i]=='o'||ch[i]=='O')
        a[14]=1;        
        else if(ch[i]=='p'||ch[i]=='P')
        a[15]=1;        
        else if(ch[i]=='q'||ch[i]=='Q')
        a[16]=1;        
        else if(ch[i]=='r'||ch[i]=='R')
        a[17]=1;        
        else if(ch[i]=='s'||ch[i]=='S')
        a[18]=1;        
        else if(ch[i]=='t'||ch[i]=='T')
        a[19]=1;        
        else if(ch[i]=='u'||ch[i]=='U')
        a[20]=1;        
        else if(ch[i]=='v'||ch[i]=='V')
        a[21]=1;        
        else if(ch[i]=='w'||ch[i]=='W')
        a[22]=1;        
        else if(ch[i]=='x'||ch[i]=='X')
        a[23]=1;        
        else if(ch[i]=='y'||ch[i]=='Y')
        a[24]=1;        
        else if(ch[i]=='z'||ch[i]=='Z')
        a[25]=1;                
    }
    for(i=0;i<26;i++)
        {
        if(a[i]!=1)
            {
            printf("not pangram");
            break;  
            }       
        }
    if(i==26)
        printf("pangram");
    return 0;
}
