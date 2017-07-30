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

void levelorder(struct tree *t){
	queue <struct tree*> q;
	if(t!=NULL)
	q.push(t);
	
	while(!q.empty()){
		if((q.front())->left)
			q.push((q.front())->left);
		if((q.front())->right)
			q.push((q.front())->right);	
		
		cout<<(q.front())->data<<" ";
		q.pop();	
	}
}



void view(struct tree *t){
	
	cout<<"\n\nPreorder view after insertion: ";
	preorder(t);
	
	cout<<"\nInorder view after insertion: ";
	inorder(t);
	
	cout<<"\nPostorder view after insertion: ";
	postorder(t);

	cout<<"\nLevelorder view after insertion: ";
	levelorder(t);
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
		
	getch();	
}
