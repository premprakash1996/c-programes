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

int height_tree(struct tree *t)
{
	if(t==NULL)
	return 0;
	else
	{	
		int lt=height_tree(t->left);
		int rt=height_tree(t->right);
		if(lt>rt)
		return (lt+1);
		else 
		return (rt+1);
	}
}

void level_display(struct tree *t,int level)
{
	if(t==NULL)
	return;
	if(level==1)
	cout<<t->data<<" ";
	else if(level>1)
	{
		level_display(t->left,level-1);
		level_display(t->right,level-1);
	}
}

void ldisplay(struct tree *t)
{
	int i,h=height_tree(t);
	for(i=1;i<=h;i++)
	{
		cout<<"\n";
		level_display(t,i);
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
	cout<<"Level order traversal\n";
	ldisplay(t);
	cout<<"\nInorder Display\n";
	display(t);
	getch();
}
