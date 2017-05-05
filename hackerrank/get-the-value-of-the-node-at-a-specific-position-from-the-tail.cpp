/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *ptr=head, *temp=head;
    int n=0;
    while(temp!=NULL)
        {
        n++;
        temp=temp->next;
    }
    temp=head; int x=0, pass=0;
    while(temp!=NULL)
        {
        x++;
        if(x==n-positionFromTail)
            {
            pass=temp->data;
            break;
        }
        temp=temp->next;
    }
   return pass;
}
