/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  Node *temp, *bug;
    temp=head;
    int n=0;
    while(n<position)
        {
        bug=temp;
        temp=temp->next;
        n++;
    }
    if(n==0)
        {
        head=head->next;
        return head;
    }
    else
        {
        temp=temp->next;
        bug->next=temp;
        return head;
    }
}
