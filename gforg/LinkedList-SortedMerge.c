#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct node* head = NULL;
struct node
{
	int data;
	struct node* next;
};

void append(struct node** headref, int newdata)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(*headref==NULL)
	{
		newnode->data = newdata;
		newnode->next=NULL;	
		*(headref)=newnode;
		return;
	}
	struct node* last = (struct node*)malloc(sizeof(struct node));
	newnode = *headref;
	last->data = newdata;
	last->next = NULL;
	while(newnode->next!=NULL)
		newnode = newnode->next;
	newnode->next = last;
}

void SortedMerge(struct node** headref1, struct node** headref2)
{
	struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
	struct node* newnode2 = (struct node*)malloc(sizeof(struct node));
	newnode1 = *headref1;
	newnode2 = *headref2;
	if(newnode1==NULL || newnode2==NULL)
	{
		if(newnode1==NULL)
		{
			while(newnode2!=NULL)
			{
				append(&head, newnode2->data);
				newnode2 = NULL;
				newnode2 = newnode2->next;
				*(headref2) = newnode2;
			}
			return;
		}
		while(newnode1!=NULL)
		{
			append(&head, newnode1->data);
			newnode1 = NULL;
			newnode1 = newnode1->next;
			*(headref1) = newnode1;
		}
	}
	if(newnode1->data < newnode2->data)
	{
		append(&head, newnode1->data);
		newnode1 = NULL;
		newnode1 = newnode1->next;
		*(headref1) = newnode1;
	}
	else
	{
		append(&head, newnode2->data);
		newnode2 = NULL;
		newnode2 = newnode2->next;
		*(headref2) = newnode2;
	}
	SortedMerge(headref1, headref2);
}

void printList(struct node* headref)
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
	struct node* headone = NULL;
	struct node* headtwo = NULL;
	append(&headone, 5); append(&headone, 10); append(&headone, 15);
	append(&headtwo, 2); append(&headtwo, 3); append(&headtwo, 20);
	printList(headone);
	printList(headtwo);
	SortedMerge(&headone, &headtwo);

	return 0;
}
