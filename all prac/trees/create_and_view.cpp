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


int main(){
	struct tree *t;
	t=NULL;
	int i=1,x;
	
	cout<<"Empty tree look";
	view(t);
	
	while(i==1){
		cout<<"Enter the element: ";
		cin>>x;
		t=createtree(t,x);
		view(t);
		cout<<"U want to insert more? (press 1)";
		cin>>i;
	}
	
	getch();	
}
