#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class mob
{
	char brand[10];
	int emi;
	long long int ph;
	public:
	void enter_details(int);
	void display_details();
	void login();
	
	class mesg
	{
		public:
		char arr[100][100];	
		void inbox(int j)
		{
			int i;
			for(i=0;i<j;i++)
			cout<<arr[i]<<"\n";
		}
		//void sent();			
		
	}t;	
}m[2];

void mob::enter_details(int i)
{
	cout<<"Enter the brand name: ";
	cin>>m[i].brand;
	cout<<"Enter the phone no.";
	cin>>m[i].ph;
	cout<<"Enter the emi code";
	cin>>m[i].emi;
}
void mob::display_details()
{
	cout<<"\nThe details of user 1 are as follows:\t  The details of user 2 are as follows:";		
	cout<<"\nThe Brand:"<<m[0].brand<<"\t\t\t  The Brand:"<<m[1].brand;
	cout<<"\nThe phone no.:"<<m[0].ph<<"\t\t  The phone no:"<<m[1].ph;
	cout<<"\nThe emi no:"<<m[0].emi<<"\t\t\t\t  The emi no:"<<m[1].emi;
}

void mob::login()
{
	long long int mno;
	int x,l=0;
	cout<<"\nEnter the mobile no to enter :";
	cin>>mno;
	if(mno==m[0].ph)
	cout<<"User 1\n";
	else if(mno==m[1].ph)
	cout<<"User 2";
	else
	cout<<"No such user";
	cout<<"Press 1 to send messages:\n2 to see inbox";
	cin>>x;
	do
	{
	switch(x)
	{
		case 1:		cin>>t.arr[l++];
					break;
		case 2:		t.inbox(l);		
					break;
		default:	break;							
	}
	cout<<"Enter the 1 or 2";
	cin>>x;
	}while(x==1||x==2);
}
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Enter the details of mobile"<<i+1 <<"\n\n";
		m[i].enter_details(i);
	}
	//	m[0].display_details();
		m[0].login();
		
	getch();
}
