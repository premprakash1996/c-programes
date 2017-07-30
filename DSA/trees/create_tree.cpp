#include<iostream>
#include<conio.h>
using namespace std;

struct tree
{
	int data;
	struct tree *left,*right;
};

struct tree *create_tree(struct tree *t, int x, int info)
{
	struct tree *temp,*t1=t;
	temp=new tree;
	temp->data=info;
	temp->left=temp->right=NULL;
	if(t==NULL)
	{
		return temp;
	}
	int a[10],i=-1,val=x;
	while(val>0)
	{
		if(val%2==0)
		{
			a[++i]=1;
			val=(val/2)-1;
		}
		else 
		{
			a[++i]=0;
			val=val/2;
		}
	}
	
	while(i>0)
	{
		if(a[i]==0)
		t1=t1->left;
		else
		t1=t1->right;
		i--;
	}
	if(a[i]==0)
	{
		t1->left=temp;
	}
	else
	{
		t1->right=temp;
	}
	return t;
}

void in_display(struct tree *t)
{
	if(t!=NULL)
	{
		in_display(t->left);
		cout<<t->data<<" ";
		in_display(t->right);
	}
}

void pre_display(struct tree *t)
{
	if(t!=NULL)
	{
		cout<<t->data<<" ";
		pre_display(t->left);
		pre_display(t->right);
	}
}

void post_display(struct tree *t)
{
	if(t!=NULL)
	{
		post_display(t->left);
		post_display(t->right);
		cout<<t->data<<" ";
	}
}

int main()
{
	struct tree *t;
	t=NULL;
	int info,i=1,x=0;
	while(i==1)
	{
		cout<<"Enter the element: ";
		cin>>info;
		t=create_tree(t,x,info);
		x++;
		cout<<"Want to add more?? ";
		cin>>i;
	}
	cout<<"Inorder: ";
	in_display(t);
	cout<<"\nPreorder: ";
	pre_display(t);
	cout<<"\nPostorder: ";
	post_display(t);
	getch();
}
