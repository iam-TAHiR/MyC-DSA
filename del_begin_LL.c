#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertend(int val)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
}
void delbegin()
{
    if(head==NULL)
    {
        printf("The list is empty\n");
    }
    struct node* temp=head;
    head=head->next;
    printf("The deleted element %d\n",temp->data);
    free(temp);
}
void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
printf("NULL\n");

}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    display();
    delbegin();
    display();
}
