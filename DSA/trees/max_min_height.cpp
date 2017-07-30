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

int min_height_tree(struct tree *t)
{
	if(t==NULL)
	return 0;
	if(t->left==NULL && t->right==NULL)
	return 1;
	if(!t->left)
	return (min_height_tree(t->right)+1);
	if(!t->right)
	return (min_height_tree(t->left)+1);
	else
	{
		int lt=min_height_tree(t->left);
		int rt=min_height_tree(t->right);
		if(lt<rt)
		return (lt+1);
		else 
		return (rt+1);
	}
}

int max_height_tree(struct tree *t)
{
	if(t==NULL)
	return 0;
	else
	{	
		int lt=max_height_tree(t->left);
		int rt=max_height_tree(t->right);
		if(lt>rt)
		return (lt+1);
		else 
		return (rt+1);
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
	cout<<"\nThe min height of the tree is: ";
	cout<<min_height_tree(t);
	cout<<"\nThe max height of the tree is: ";
	cout<<max_height_tree(t);
	getch();
}
