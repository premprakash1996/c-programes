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

struct tree *create_bs_tree(struct tree *t,int x)
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
			t->left=create_bs_tree(t->left,x);
		else if(x>t->data)
			t->right=create_bs_tree(t->right,x);
	}
	return t;	
}

// void in_display(struct tree *t);
/*
struct tree *create_t_bst(struct tree *root,struct tree *t)
{
	if(root!=NULL)
	{
		create_t_bst(root->left,t);
		cout<<"\n"<<root->data;
		t=create_bs_tree(t,root->data);
		cout<<"\nsteps";
		in_display(t);
		create_t_bst(root->right,t);
		return t;
	}
}
*/

void clct(struct tree *t,int a[],int *i)
{
	if(t!=NULL)
	{
		clct(t->left,a,i);
		a[(*i)++]=t->data;
		clct(t->right,a,i);
	}
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
	struct tree *root,*t;
	t=root=NULL;
	int info,i=1,x=0,j,a[100];
	while(i==1)
	{
		cout<<"Enter the element: ";
		cin>>info;
		root=create_tree(root,x,info);
		x++;
		cout<<"Want to add more?? ";
		cin>>i;
	}
	i=0;
	cout<<"Inorder Tree: ";
	in_display(root);
	cout<<"\nPreorder Tree: ";
	pre_display(root);
	cout<<"\nPostorder Tree: ";
	post_display(root);
	clct(root,a,&i);
	cout<<"\nCreating BST: ";
	for(j=0;j<i;j++)
	t=create_bs_tree(t,a[j]);
	cout<<"\nInorder BSTree: ";
	in_display(t);
	cout<<"\nPreorder BSTree: ";
	pre_display(t);
	cout<<"\nPostorder BSTree: ";
	post_display(t);
	
	getch();
}
