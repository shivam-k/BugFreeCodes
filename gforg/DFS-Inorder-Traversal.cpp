#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

void printlist(node *head)
{
	if(head==NULL)
		return;
	else
	{
		printlist(head->left);
		printf("%d ", head->data);
		printlist(head->right);
	}
}

int main(void)
{
	node *root, *a, *b, *c, *d, *e;

	a=(node*)malloc(sizeof(node));
	b=(node*)malloc(sizeof(node));
	c=(node*)malloc(sizeof(node));
	d=(node*)malloc(sizeof(node));
	e=(node*)malloc(sizeof(node));
	
	a->data=1;
	b->data=2;
	c->data=3;
	d->data=4;
	e->data=5;

	a->left=b;
	a->right=c;
	
	b->left=d;
	b->right=e;

	c->left=NULL;
	c->right=NULL;

	d->left=NULL;
	d->right=NULL;

	e->left=NULL;
	e->right=NULL;

	root=a;
	printlist(root);

	printf("\n");

	return 0;
}


