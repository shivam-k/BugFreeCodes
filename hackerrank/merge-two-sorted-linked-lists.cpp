#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}node;

void printlist(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"\n";
}

node* MergeLists(node *headA, node *headB)
{
  node *temp1, *temp2, *ptr, *ref;
  temp1=headA;
  temp2=headB;
  ptr=(node*)malloc(sizeof(node));
  ref=ptr;
  while(temp1!=NULL && temp2!=NULL)
      {
      ptr->next=(node*)malloc(sizeof(node));
      ptr=ptr->next;
      if(temp1->data<temp2->data)
          {
          ptr->data=temp1->data;
          temp1=temp1->next;
      }
      else
          {
          ptr->data=temp2->data;
          temp2=temp2->next;
      }
  }
  while(temp1!=NULL)
  {
     ptr->next=(node*)malloc(sizeof(node));
     ptr=ptr->next;
     ptr->data=temp1->data;
     temp1=temp1->next;
  }
  while(temp2!=NULL)
  {
     ptr->next=(node*)malloc(sizeof(node));
     ptr=ptr->next;
     ptr->data=temp2->data;
     temp2=temp2->next;
  }
  ptr->next=NULL;
  return ref->next;
}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		node *i, *j, *headA, *headB;
		int g, n1, n2, k;
		cin>>n1>>n2;

		headA=(node*)malloc(sizeof(node));     //allocating memory for node head
		i=headA;       //giving address of node head to node i
		for(g=1; g<=n1; g++)
		{
			i->next=(node*)malloc(sizeof(node));
			i=i->next;
			cin>>i->data;
		}
		i->next=NULL;
		
		headB=(node*)malloc(sizeof(node));     //allocating memory for node head
		j=headB;       //giving address of node head to node i
		for(g=1; g<=n2; g++)
		{
			j->next=(node*)malloc(sizeof(node));
			j=j->next;
			cin>>j->data;
		}
		j->next=NULL;

		printlist(headA->next);
		printlist(headB->next);

		printlist(MergeLists(headA->next, headB->next));
	}
}
