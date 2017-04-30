/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  Node* temp;
  Node* ptr=(Node*)malloc(sizeof(Node));
  ptr->data=data;
  ptr->next=NULL;
  temp=head;
  
  if(head==NULL)
      {
     return ptr;
  }
  while(temp->next!=NULL)
      {
      temp=temp->next;
  }
  temp->next=ptr;
  return head;
}
