#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,a,b,f,R,r,C,c;
	static char G[1000][1000],P[1000][1000];
	cin>>R>>C;
	for(i=0;i<R;i++)
	cin>>G[i];
	cin>>r>>c;
	for(i=0;i<r;i++)
	cin>>P[i];
	
	for(i=0;i<R;i++)
	{for(j=0;j<C;j++)
		cout<<G[i][j];
	cout<<"\n";
	}
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++)
		cout<<P[i][j];
	cout<<"\n";
	}
	
	for(i=0;i<=R-r;i++)
	{
		for(j=0;j<=C-c;j++)
		{
			if(G[i][j]==P[0][0])
			{
				f=0;
				for(a=0;a<r;a++)
				{
					for(b=0;b<c;b++)
					{
						if(G[i+a][j+b]!=P[a][b])
						{f=-1; break;}
					}
					if(f==-1)
					break;
				}
				if(a==r && b==c)
				f=1;
			}
			if(f==1)
			break;
		}
		if(f==1)
		break;
	}
	if(f==1)
	cout<<"\n\nYES";
	else
	cout<<"\n\nNO";
	getch();
}
