/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  Node* temp;
  temp=head;
  if(temp==NULL)
    return;
  else
     ReversePrint(temp->next);
   cout<<temp->data<<"\n";
}
