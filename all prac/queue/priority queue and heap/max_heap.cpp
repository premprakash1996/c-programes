// max heap
#include<bits/stdc++.h>
#include<conio.h>
#define max 100
using namespace std;

struct heap{
	int *array;
	int capacity;
	int count;
	int headtype;
};

struct heap* createheap(struct heap *h){
	h=new heap;
	h->capacity=max;
	h->count=0;
	h->headtype=1;
	h->array=new int [max];
	return h;
}

int left(int i, struct heap *h){
	if((2*i+1)>=h->count)
	return -1;
	return 2*i+1;
}

int right(int i, struct heap *h){
	if((2*i+2)>=h->count)
	return -1;
	return 2*i+2;
}

struct heap * percolate(struct heap *h, int pos){
	int i,l=left(pos,h);
	int r=right(pos,h);
//	cout<<endl<<"l: "<<l;
//	cout<<" r: "<<r<<endl;
	
	if(l!=-1 && ((h->array[l])>(h->array[pos])))
		i=l;
	else i=pos;
	
	if(r!=-1 && ((h->array[r])>(h->array[i])))
		i=r;
	//cout<<"i: "<<i<<" pos: "<<pos<<endl;
	if(i!=pos){
		int temp=h->array[pos];
		h->array[pos]=h->array[i];
		h->array[i]=temp;
//		cout<<endl<<h->array[i]<<endl;
//		cout<<endl<<h->array[pos]<<endl;
		h=percolate(h,i);
	}
	
	return h;
}

struct heap *insert(struct heap *h){
	
	if(h->count==h->capacity){
		cout<<"Not possible, full";
		return h;
	}
	
	int x,temp;
	cout<<"Enter what to enter:";
	cin>>x;
	
	h->count++;
	int pos=h->count-1;
	h->array[pos]=x;
	
	while( (pos-1)/2>=0 && h->array[(pos-1)/2]<h->array[pos]){
		temp=h->array[pos];
		h->array[pos]=h->array[(pos-1)/2];
		h->array[(pos-1)/2]=temp;
		pos=(pos-1)/2;
	}
	
	return h;
}

struct heap *delmax(struct heap *h){
	if(h->count==0)
	return h;
	h->array[0] = h->array[(h->count)-1];
	(h->count)--;
	cout<<h->array[h->count];
	percolate(h,0);
	
	return h;
}

void view(struct heap *h){
	int i=0;
	while(i< h->count)
	cout<<h->array[i++]<<" ";
}

int main(){
	struct heap *h=NULL;
	h=createheap(h);
	
	int i=1,a;
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	h=insert(h);
	
	view(h);
	while(i){
		cout<<"Enter what to do 1(insert) 2(delete): ";
		cin>>a;
		
		if(a==1){
			h=insert(h);
			cout<<"\nView: ";
			view(h);
		}
			
		if(a==2){
			h=delmax(h);
			cout<<"\nview after delete: ";
			view(h);
		}
		
		cout<<"More operations?";
		cin>>i;
	}
		
	getch();	
}
