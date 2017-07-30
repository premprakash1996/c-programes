#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
char ch[500];
    int l,t,j,i,k,m,a[29]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int p[29]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
   cin>>t;
    for(i=0;i<t;i++)
        {
        
         k=0;
    cin.ignore();
	 gets(ch);
        l=strlen(ch);
        for(j=0;j<l;j++)
        {
            if(ch[j]==' ')
            k++;    
            else
                (a[k])++;        
        }
        for(m=0;m<=k;m++)
        {
            if(a[m]!=p[m])    
            {   
                cout<<"It's not a pi song.\n";
                break;                    
            }        
        }
   
       
         if(m==(k+1))
        cout<<"It's a pi song.\n";
    }
    return 0;
}

