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
void printlist(struct node* headref)
{
	if(headref==NULL)
		return;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode = headref;
	while(newnode->next!=NULL)
	{
		printf("%d\n", newnode->data);
		newnode = newnode->next;
	}	
	printf("%d\n", newnode->data);

}

int main(void)
{
	struct node* head=NULL;

	append(&head, 60);
	append(&head, 10);
	append(&head, 30);
	append(&head, 20);
	append(&head, 50);
	printlist(head);

	return 0;
}
