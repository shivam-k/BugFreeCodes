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
// void reverseList(struct node** headref)
// {
// 	if(*headref==NULL)
// 		return;
// 	struct node* newnode;
// 	struct node* prenode = NULL;
// 	newnode = *headref;
// 	printf("%d %p %p\n", newnode->data, newnode, newnode->next);
// 	while(newnode->next!=NULL)
// 	{
// 		printf("%d ", newnode->data);
// 		if(newnode==*headref)
// 		{
// 			prenode = newnode;
// 			newnode->next=NULL;
// 			newnode = newnode->next;
// 			continue;
// 		}
// 		newnode->next=prenode;
// 		prenode = newnode;
// 		newnode = newnode->next;
// 	}
// 	newnode->next=prenode;
// 	*(headref) = newnode;
// }

void reverseList(struct node** headref)
{
	struct node* prev = NULL;
	struct node* current = *headref;
	struct node* next;
	while(current->next!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	current->next = prev;
	*(headref) = current;
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

	append(&head, 10);
	push(&head, 20);
	push(&head, 30);
	push(&head, 40);
	append(&head, 50);
	printlist(head);
	reverseList(&head);
	printlist(head);

	return 0;
}
