#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node* head=NULL;

void insertbegin(int val)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	head=newnode;

}
void insertend(int val)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else {
		struct node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		temp->next=newnode;
	}
}
void insertpos(int pos,int val)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(!newnode)
		printf("memory not allocated\n");
	newnode->data=val;
	if(head==NULL)
	{
		printf("the list is empty\n");
		return;
	}

	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		return;
	}

	struct node* temp=head;
	for(int i=1; i<pos&&temp!=NULL; i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{	printf("Invalid position\n");
		return;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void display() {
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
void delbegin() {
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	struct node* temp=head;
	head=head->next;
	printf("deleted elem->%d\n",temp->data);
	free(temp);
}

void delend()
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        printf("DELETED ELEMENT %d\n",head->data);
        head=NULL;
        return;
    }
    struct node* temp=head;
    struct node* prev=temp;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    printf("deleted element %d\n",temp->data);
       prev->next=NULL;
       free(temp);
       
}
int main()
{
	insertbegin(10);
	insertbegin(20);
	insertbegin(30);
	insertend(40);
	insertend(50);
	insertbegin(5);
	insertpos(8,66);
	delbegin();
	delend();
	display();
}
