#include<stdio.h>
void quicksort(int *x,int first,int last)
{
int j,i;
int pivot,temp;

if(first<last){
pivot=first;
i=first;
j=last;

while(i<j){
while(x[i]<=x[pivot]&&i<last)
i++;
while(x[j]>x[pivot])
j--;
if(i<j){
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}

temp=x[pivot];
x[pivot]=x[j];
x[j]=temp;
quicksort(x,first,j-1);
quicksort(x,j+1,last);

}
}

int main()
{
   int i,j,temp,n,k,val=0;
   scanf("%d %d",&n,&k);
   int a[n];
    for(i=0; i<n; i++)
    {
      scanf("%d",&(a[i]));
    }    
   quicksort(a,0,n-1);
   for(i=0;i<n/2;i++)
        {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=a[i];
        }
   for(i=1;i<=n/k;i++)
       {
            for(j=0;j<k;j++)
            val+=i*(a[(k*(i-1))+j]);       
       }
    if(n%k!=0)    
    {
       for(j=0;j<n%k;j++) 
       val+=i*(a[(k*(i-1))+j]); 
    }
    printf("%d",val);
}
