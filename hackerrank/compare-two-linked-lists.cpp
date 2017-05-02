/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  Node *temp1, *temp2;
  temp1=headA;
  temp2=headB;
  int pass=1;
  while(temp1!=NULL && temp1!=NULL)
      {
      if(temp1->data!=temp2->data)
          {
          pass=0;
          break;
      }
      temp1=temp1->next;
      temp2=temp2->next;
  }
  if(pass==1 && temp1==NULL && temp2==NULL)
      return 1;
   else
       return 0;
}
