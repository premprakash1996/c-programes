Node* Reverse(Node *head)
{
Node *current,*n,*prev;
prev=NULL;
current=head;
// next=current->next;
while(current!=NULL)
{
n=current->next;
current->next=prev;
prev=current;
current=n;
}
return prev;
}
