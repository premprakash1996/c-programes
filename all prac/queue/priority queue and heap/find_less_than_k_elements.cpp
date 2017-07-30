// heapify an array
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
	if((2*i+1)>h->count)
	return -1;
	return 2*i+1;
}

int right(int i, struct heap *h){
	if((2*i+2)>h->count)
	return -1;
	return 2*i+2;
}

struct heap *percolate(struct heap *h, int pos){
	int i,l=left(pos,h);
	int r=right(pos,h);
	
	if(l!=-1 && h->array[l]<h->array[pos])
		i=l;
	else i=pos;
	
	if(r!=-1 && h->array[r]<h->array[i])
		i=r;
	
	if(i!=pos){
		int temp=h->array[pos];
		h->array[pos]=h->array[i];
		h->array[i]=temp;
		h=percolate(h,i);
	}
	
	return h;
}

void view(struct heap *h){
	int i=0;
	while(i< h->count)
	cout<<h->array[i++]<<" ";
}

struct heap * heapify(struct heap *h, int arr[15]){
	int i,n=15;
	for(i=0;i<n;i++){
		h->array[(h->count)++]=arr[i];
	}
	
	view(h);
	
	for(i=(n-2)/2;i>=0;i--)
		h=percolate(h,i);
	return h;	
}

void findlesser(int k, struct heap *h, int pos){
	if(pos!=-1 && h->array[pos]<k){
		cout<<h->array[pos]<<" ";
		findlesser(k,h,left(pos,h));
		findlesser(k,h,right(pos,h));
	}
}

int main(){
	struct heap *h=NULL;
	h=createheap(h);
	
	int i,k,arr[15]={5,8,1,7,3,9,17,34,12,6,2,4,10,21,20};
	
	cout<<"Initially: ";
	for(i=0;i<15;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	h=heapify(h,arr);
	cout<<endl;
	view(h);
	
	cout<<"Enter the k value: ";
	cin>>k;
	findlesser(k,h,0);
	
	getch();	
}
