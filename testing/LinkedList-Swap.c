#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node
{
	int data;
	struct node* next;
};
void push(struct node** headref, int newdata)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = newdata;
	if(headref==NULL)
	{
		newnode->next=NULL;
		return;
	}
	newnode->next = *(headref);
	*(headref) = newnode;
}
void append(struct node** headref, int newdata)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(*headref==NULL)
	{
		newnode->data = newdata;
		newnode->next = NULL;
		*(headref) = newnode;
		return;
	}
	newnode = *headref;
	struct node* last = (struct node*)malloc(sizeof(struct node));
	last->data = newdata;
	last->next = NULL;
	while(newnode->next!=NULL)
		newnode = newnode->next;
	newnode->next = last;
}
void delete(struct node** headref, int pos)
{
	int count=0;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	struct node* prenode = (struct node*)malloc(sizeof(struct node));
	newnode = *headref;
	if(pos==0)
	{
		*(headref) = newnode->next;
		return;
	}
	while(newnode->next!=NULL && count<=pos)
	{
		if(count==pos)
		{
			prenode->next = newnode->next;
			return;
		}
		else
		{
			prenode = newnode;
			newnode = newnode->next;
			count++;
		}
	}
}
void swap(struct node* headref, int data1, int data2)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	struct node* headref1 = (struct node*)malloc(sizeof(struct node));
	struct node* headref2 = (struct node*)malloc(sizeof(struct node));
	newnode = headref;
	while(newnode->next!=NULL)
	{
		if(newnode->data==data1)
			headref1 = newnode;
		if(newnode->data==data2)
			headref2 = newnode;
		newnode = newnode->next;
	}
	newnode->data = headref1->data;
	headref1->data = headref2->data;
	headref2->data = newnode->data;
}

void printlist(struct node* headref)
{
	if(headref==NULL)
		return;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode = headref;
	while(newnode->next!=NULL)
	{
		printf("%d ", newnode->data);
		newnode = newnode->next;
	}	
	printf("%d\n", newnode->data);

}

int main(void)
{
	struct node* head=NULL;

	append(&head, 10);
	append(&head, 15);
	append(&head, 12);
	append(&head, 13);
	append(&head, 20);
	append(&head, 14);
	printlist(head);
	swap(head, 12, 20);
	printlist(head);

	return 0;
}
