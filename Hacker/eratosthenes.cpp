#include<iostream>
#include<conio.h>
using namespace std;

int prime(int limit)
{
    int i,j,numbers[1000],p=0;

    for (i=0;i<limit-1;i++){
        numbers[i]=i+2;
    }

    for (i=0;i<limit-1;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<limit-1;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    for (int i = 0; i<limit-1; i++)
    {
        if (numbers[i]!=-1)
        p++;
    }
    return p;
}

int main()
{
	int n;
	cin>>n;
	cout<<"\n"<<prime(n);
	getch();
}
