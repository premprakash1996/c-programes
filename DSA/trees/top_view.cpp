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

void display(struct tree *t)
{
	if(t!=NULL)
	{
		display(t->left);
		cout<<t->data<<" ";
		display(t->right);
	}
}

void top_left(struct tree *t)
{
	if(t!=NULL)
	{
		top_left(t->left);
		cout<<t->data<<" ";
	}
}

void top_right(struct tree *t)
{
	if(t!=NULL)
	{
		cout<<t->data<<" ";
		top_right(t->right);
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
	cout<<"\nDisplay all: ";
	display(t);
	cout<<"\nTop View: ";
	top_left(t);
	if(t->right!=NULL)
	top_right(t->right);
	getch();
}
