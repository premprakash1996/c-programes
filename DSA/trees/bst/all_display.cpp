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

void display_inorder(struct tree *t)
{
	if(t!=NULL)
	{
		display_inorder(t->left	);
		cout<<t->data<<" ";
		display_inorder(t->right);
	}
}

void display_preorder(struct tree *t)
{
	if(t!=NULL)
	{
		cout<<t->data<<" ";
		display_preorder(t->left);
		display_preorder(t->right);
	}
}

void display_postorder(struct tree *t)
{
	if(t!=NULL)
	{
		display_postorder(t->left);
		display_postorder(t->right);
		cout<<t->data<<" ";
	}
}

void display_reverseorder(struct tree *t)
{
	if(t!=NULL)
	{
		display_reverseorder(t->right);
		cout<<t->data<<" ";
		display_reverseorder(t->left);
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
	cout<<"\nInorder: ";
	display_inorder(t);
	cout<<"\nPreorder: ";
	display_preorder(t);
	cout<<"\nPostorder: ";
	display_postorder(t);
	cout<<"\nReverseorder: ";
	display_reverseorder(t);
	getch();
}
