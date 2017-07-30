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

struct tree *findmax(struct tree *t){
	if(t==NULL)
		return NULL;	
	
	else if(t->right==NULL)
		return t;
	else	
		return findmax(t->right);
}

struct tree *del(struct tree *t, int x){
	
	if(t==NULL)
		cout<<"Element not there.";
	
	else if(x<t->data){
		t->left=del(t->left,x);
	}
	else if(x>t->data){
		t->right=del(t->right,x);
	}
	
	else{
		struct tree *temp;
		temp=t;
		if(t->right==NULL){
			t=t->left;
			delete temp;
		}
		else if(t->left==NULL){
			t=t->right;
			delete temp;
		}
		
		else{
			temp=findmax(t->left);
			t->data=temp->data;
			t->left=del(t->left,t->data);
		}	
	}	
	return t;
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
	t=createtree(t,45);
	view(t);
	t=createtree(t,14);
	view(t);
	
	cout<<"Enter which element u want to delete: ";
	cin>>x;
	t=del(t,x);
	view(t);
	
	getch();	
}
