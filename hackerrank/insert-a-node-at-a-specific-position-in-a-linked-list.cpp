/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    
    Node* ptr=(Node*)malloc(sizeof(Node));
    ptr->data=data;
    if(head==NULL)
        {
        ptr->next=NULL;
        return ptr;
    }
    if(position==0)
        {
        ptr->next=head;
        return ptr;
    }
    Node *temp;
    temp=head;
    int n=1;
 while(n<position)
        {
        temp=temp->next;
        n++;
    }
    Node *bug;
    bug=temp->next;
    temp->next=ptr;
    ptr->next=bug;
    return  head;
}
