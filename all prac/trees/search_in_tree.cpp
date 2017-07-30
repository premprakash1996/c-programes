// tree insert and view
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

struct tree{
	struct tree *left;
	struct tree *right;
	int data;
};

struct tree *createtree(struct tree *t, int x){
	
	if(t==NULL){
		struct tree *temp;
		temp=new tree;
		temp->left=NULL;
		temp->right=NULL;
		temp->data=x;
		return temp;
	}
	
	if(x<t->data)
		t->left=createtree(t->left,x);
		
	if(x>t->data)
		t->right=createtree(t->right,x);
	
	return t;	
}

void preorder(struct tree *t){
	if(t==NULL) return;
	
	cout<<t->data<<" ";
	preorder(t->left);
	preorder(t->right);
}

void inorder(struct tree *t){
	if(t==NULL) return;
	
	inorder(t->left);
	cout<<t->data<<" ";
	inorder(t->right);
}

void postorder(struct tree *t){
	if(t==NULL) return;
	
	postorder(t->left);
	postorder(t->right);
	cout<<t->data<<" ";
}

void view(struct tree *t){
	
	cout<<"\nPreorder view after insertion: ";
	preorder(t);
	
	cout<<"\nInorder view after insertion: ";
	inorder(t);
	
	cout<<"\nPostorder view after insertion: ";
	postorder(t);
}

void search(struct tree *t, int x){
	
	if(t==NULL){
		cout<<"The element not found.";
		return;
	}
	
	if(t->data==x){
		cout<<"The element found.";
		return;
	}
	
	if(x<t->data)
		search(t->left,x);
		
	else if(x>t->data)
		search(t->right,x);	
}

struct tree *findmin(struct tree *t){
	if(t==NULL)
		return NULL;	
	
	else if(t->left==NULL)
		return t;
	else	
		return findmin(t->left);
}

struct tree *findmax(struct tree *t){
	if(t==NULL)
		return NULL;	
	
	else if(t->right==NULL)
		return t;
	else	
		return findmax(t->right);
}

int main(){
	struct tree *t,*temp;
	t=NULL;
	int x;
	
	t=createtree(t,30);
	view(t);
	t=createtree(t,40);
	view(t);
	t=createtree(t,35);
	view(t);
	t=createtree(t,10);
	view(t);
	t=createtree(t,16);
	view(t);
	t=createtree(t,18);
	view(t);
	t=createtree(t,5);
	view(t);
	t=createtree(t,25);
	view(t);	
	
	cout<<"\n\nEnter the element for search: ";
	cin>>x;
	search(t,x);
	
	cout<<"\n\nThe minimum element in tree is : ";
	temp=findmin(t);
	if(temp!=NULL)
	cout<<temp->data;
	else
	cout<<"Empty tree.";
	
	cout<<"\n\nThe maximum element in tree is: ";
	temp=findmax(t);
	if(temp!=NULL)
	cout<<temp->data;
	else
	cout<<"Empty tree.";
	
	getch();	
}
