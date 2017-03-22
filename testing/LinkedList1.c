#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node
{
	int data;
	struct node* next;
};

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
	struct node* first=NULL;
	struct node* second=NULL;

	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));

	head->data = 10;
	head->next = first;

	first->data = 20;
	first->next = second;

	second->data = 30;
	second->next=NULL;

	printlist(head);

	return 0;
}
