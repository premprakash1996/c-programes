#include<iostream>
#include<conio.h>
using namespace std;

struct tree
{
	int data;
	struct tree *left,*right;	
};

struct tree *create_tree(struct tree *t,int x)
{
	if(t==NULL)
	{
		t=new tree;
		t->data=x;
		t->left=t->right=NULL;
	}
	else
	{
		if(x<t->data)	
			t->left=create_tree(t->left,x);
		else if(x>t->data)
			t->right=create_tree(t->right,x);
	}
	return t;	
}

void horizontal_distance(struct tree *t,int *min,int *max,int hd)
{
	if(t==NULL)
	return;
	if(hd>*max) *max=hd;
	else if(hd<*min) *min=hd;
	horizontal_distance(t->left,min,max,hd-1);
	horizontal_distance(t->right,min,max,hd+1);
}

void vdisplay(struct tree *t,int hd,int k)
{
	if(t!=NULL)
	{
		vdisplay(t->left,hd,k-1);
		if(k==hd)
		cout<<t->data<<" ";
		vdisplay(t->right,hd,k+1);
	}
}
void vertical_display(struct tree *t)
{
	int max=0,min=0,hd=0,i,k=0;
	horizontal_distance(t,&min,&max,hd);
	cout<<"\nHorizontal min: "<<min<<" and max: "<<max;	
	for(i=min;i<=max;i++)
	{
		cout<<"\nNodes at horizontal distance "<<i<<": ";
		vdisplay(t,i,k);
	}
}

void display(struct tree *t)
{
	if(t!=NULL)
	{
		display(t->left);
		cout<<t->data<<" ";
		display(t->right);
	}
}

int main()
{
	struct tree *t;
	int x,i=1;
	t=NULL;
	while(i==1)
	{
		cout<<"Enter the element to be inserted: ";
		cin>>x;
		t=create_tree(t,x);
		cout<<"Enter more elements??? \nPress 1: ";
		cin>>i;	
	}
	display(t);
	vertical_display(t);
	getch();
}
