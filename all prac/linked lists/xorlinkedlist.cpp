// xor lists substitution of doubley linked lists

#include<iostream>
#include<conio.h>
using namespace std;

struct xorlist{
	struct xorlist *next;
	int data;
};

struct xorlist* XOR(struct xorlist *a, struct xorlist *b) {
    return (struct xorlist*) ((unsigned int) (a) ^ (unsigned int) (b));
}

void insert(struct xorlist *head,int x){
	struct xorlist *tmp,*tmp1;
	tmp=NULL;
	while(head!=NULL){
		tmp1=head;
		head=XOR(head->next,tmp);
		tmp=tmp1;
	}
	
	tmp1=new xorlist;
	tmp1->data=x;
	tmp1->next=tmp;
	
	tmp->next=XOR(tmp->next,tmp1);
}

struct xorlist* forward(struct xorlist *head){
	struct xorlist *tmp,*tmp1;
	tmp=NULL;
	while(head!=NULL){
		cout<<head->data<<" ";
		tmp1=head;
		head=XOR(head->next,tmp);
		tmp=tmp1;
	}
	return tmp;
}

void backward(struct xorlist *last){
	struct xorlist *tmp,*tmp1;
	tmp=NULL;
	while(last!=NULL){
		cout<<last->data<<" ";
		tmp1=last;
		last=XOR(last->next,tmp);
		tmp=tmp1;
	}
}

int main(){
	struct xorlist *head,*temp,*last;
	
	head=new xorlist;
	head->data=10;
	head->next = NULL;
	
	cout<<head<<endl;
	
	temp=new xorlist;
	temp->data=20;
	temp->next=head;
	
	head->next=XOR(temp,NULL);

	cout<<head->data<<"  "<<head->next->data <<endl;
	
	temp=new xorlist;
	temp->data=30;
	temp->next=head->next;
	
	head->next->next=XOR(temp,head);
	
	insert(head,40);
	
	insert(head,50);
	cout<<endl<<"Forward: ";
	last=forward(head);
	cout<<endl<<endl<<"Backward: ";
	backward(last);
	
	getch();
	
}
