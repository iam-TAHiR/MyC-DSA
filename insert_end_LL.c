#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
  struct node* head=NULL;
 void insert_begin(int val)
 {
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=head;
     head=newnode;
     
 }
 void insert_end(int val)
 {
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=val;
     newnode->next=NULL;
     if(head==NULL)
     head=newnode;
     else{
         struct node* temp=head;
         
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newnode;
         
     }
 }
 void display()
 {
     struct node* temp=head;
     while(temp!=NULL)
     {printf("%d->",temp->data);
     temp=temp->next;
 }
  printf("NULL");
 }
  int main()
  {
      insert_end(20);
      insert_begin(10);
      insert_end(90);
      display();
      
  }
