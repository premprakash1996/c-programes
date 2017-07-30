#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>
int main() {

    char ch[10000];
    int t,l,i,j,k,sum,val;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {   sum=0;
        int a[26]={0}; 
		int b[26]={0};
        scanf("%s",ch);
        l=strlen(ch);
        if(l%2==1)
            printf("-1\n");    
        else
        {
            for(i=0;i<l/2;i++)
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
            for(i=l/2;i<l;i++)
        {
            
        if(ch[i]=='a')
        b[0]++;
        else if(ch[i]=='b')
        b[1]++;        
        else if(ch[i]=='c')
        b[2]++;        
        else if(ch[i]=='d')
        b[3]++;        
        else if(ch[i]=='e')
        b[4]++;        
        else if(ch[i]=='f')
        b[5]++;        
        else if(ch[i]=='g')
        b[6]++;        
        else if(ch[i]=='h')
        b[7]++;        
        else if(ch[i]=='i')
        b[8]++;        
        else if(ch[i]=='j')
        b[9]++;        
        else if(ch[i]=='k')
        b[10]++;        
        else if(ch[i]=='l')
        b[11]++;        
        else if(ch[i]=='m')
        b[12]++;        
        else if(ch[i]=='n')
        b[13]++;        
        else if(ch[i]=='o')
        b[14]++;        
        else if(ch[i]=='p')
        b[15]++;        
        else if(ch[i]=='q')
        b[16]++;        
        else if(ch[i]=='r')
        b[17]++;        
        else if(ch[i]=='s')
        b[18]++;        
        else if(ch[i]=='t')
        b[19]++;        
        else if(ch[i]=='u')
        b[20]++;        
        else if(ch[i]=='v')
        b[21]++;        
        else if(ch[i]=='w')
        b[22]++;        
        else if(ch[i]=='x')
        b[23]++;        
        else if(ch[i]=='y')
        b[24]++;        
        else if(ch[i]=='z')
        b[25]++;              
        }
       for(i=0;i<26;i++)
       {
		  if(a[i]>=b[i])
		  sum=sum+b[i];
		  else
		  sum=sum+a[i];			
	   }
       val=(l/2)-sum;
	      //sum=sum+abs(a[i]-b[i]);  
       printf("%d\n",val); 
            
      }                
   }
        
        
    
    getch();
}
