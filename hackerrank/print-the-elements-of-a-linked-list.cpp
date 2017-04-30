/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
        {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    
}