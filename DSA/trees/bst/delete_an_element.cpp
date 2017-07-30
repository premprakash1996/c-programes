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

struct tree *min(struct tree *t)
{
	if(t==NULL)
	return NULL;
	else if(t->left==NULL)
	return t;
	else return(min(t->left));
}

struct tree *del_tree(struct tree *t,int x)
{
	if(t==NULL)
	cout<<"Element Not Found";
	else
	{
		if(x<t->data)
		t->left=del_tree(t->left,x);
		else if(x>t->data)
		t->right=del_tree(t->right,x);
		else if(t->left && t->right)
		{
			struct tree *temp;
			temp=min(t->right);
			t->data=temp->data;
			t->right=del_tree(t->right,t->data);	
		}
		else
		{
			struct tree *temp=t;
			if(t->left==NULL)
			t=t->right;
			else if(t->right==NULL)
			t=t->left;
			delete temp;
			return t;	
		}		
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
	cout<<"Want to delete any element ??? Press 1: ";
	cin>>i;
	if(i==1)
	{
		cout<<"Enter the element u want to delete: ";
		cin>>i;
		t=del_tree(t,i);
		cout<<"\nInorder: ";
		display_inorder(t);
	}
	getch();
}
