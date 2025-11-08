#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
     struct node* left;
     struct node* right;
    
};
int main()
{
    struct node* root=(struct node*)malloc(sizeof(struct node));
    struct node* leftchild=(struct node*)malloc(sizeof(struct node));
    struct node* rightchild=(struct node*)malloc(sizeof(struct node));
    root->data=1;
    leftchild->data=2;
    rightchild->data=3;
    root->left=leftchild;
    root->right=rightchild;
    leftchild->right=leftchild->left=NULL;
    rightchild->left=rightchild->right=NULL;
    printf("Root-> %d\n",root->data);
    printf("left child-> %d\n",root->left->data);
    printf("Right child-> %d\n",root->right->data);
    return 0;
}
