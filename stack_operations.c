#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int val)
{
    if(top==size-1)
    {
        printf("Stack is Full\n");
    }
    top++;
    stack[top]=val;
  
    
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    printf("\npopped %d\n",stack[top]);
    top--;
}
void peek()
{
    {
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    
    printf("TOP: %d\n",stack[top]);
}
}
void display()
{
     
    if(top==-1)
    {
        printf("The stack is empty\n");
        return;
    }
    printf("STACK\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    push(10);
    push(20);
    display();
    pop();
    peek();
    push(30);
    display();
    peek();
    push(40);
    push(50);
    pop();
    display();
}
