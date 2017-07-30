#include<stdio.h>
#include<conio.h>

struct tree
{
	int info;
	struct tree *right,*left;	
};

typedef struct tree *bstnode;

bstnode insert(bstnode t, int x)
{
	if(t==NULL)
	{
		t=(bstnode)malloc(sizeof(struct tree));
		t->info=x;	
		t->right=t->left=NULL;
	}
	else
	{
		if(x<t->info)
		t->left=insert(t->left,x);	
		else if(x>t->info)
		t->right=insert(t->right,x);
	}
	return t;
}

int main()
{
	int x;
	bstnode t=NULL;
	int c=1;
	while(c==1)
	{
		printf("Enter the no to input\n");
		scanf("%d",&x);
		t=insert(t,x);
		printf("Enter 1 to add more\n");
		scanf("%d",&c);
	}
	getch();
}
