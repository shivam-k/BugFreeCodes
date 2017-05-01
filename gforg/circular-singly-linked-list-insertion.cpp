#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}node;

//function to print the list
void printlist(node *last)
{
	node *temp, *i;
	temp=last;
	i=temp;
	while(1)
	{
		temp=temp->next;
		cout<<temp->data<<" ";
		if(i==temp)
			break;
	}
	cout<<"\n";
}

//function to add very first node
node* startlist(node *last, int data)
{
	node *temp;
	if(last==NULL)
	{
		temp=(node*)malloc(sizeof(node));
		temp->data=data;
		temp->next=temp;
		return temp;
	}
}

//function to add node in the beginning
node* inserthead(node *last, int data)
{
	node *temp;
	if(last==NULL)
		return startlist(last, data);
	if(last!=NULL)
	{
		temp=(node*)malloc(sizeof(node));
		temp->data=data;
		temp->next=last->next;
		last->next=temp;
		return last;
	}
}

//function to add node in the last
node* inserttale(node *last, int data)
{
	node *temp;
	if(last==NULL)
		return startlist(last, data);
	if(last!=NULL)
	{
		temp=(node*)malloc(sizeof(node));
		temp->data=data;
		temp->next=last->next;
		last->next=temp;

		return temp;
	}	
}

//function to add node between two node
node* insertbetween(node *last, int data, int item)
{
	if(last->data==item)
		return inserttale(last, data);
	node *temp, *ptr;
	temp=last;
	while(temp->data!=item)
		temp=temp->next;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=data;
	ptr->next=temp->next;
	temp->next=ptr;
	return last;
}

int main(void)
{
	node *last, *temp;
	last=NULL;
	last=inserthead(last, 2);
	last=inserthead(last, 3);
	last=inserttale(last, 5);
	last=insertbetween(last, 10, 2);
	printlist(last);
	
	return 0;
}


