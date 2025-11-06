#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};
struct node* head = NULL;

void insertbegin(int val) {
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}

void insertend(int val) {
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = NULL;
	if (head == NULL)
		head = newnode;
	else {
		struct node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
}

void display() {
	struct node* temp = head;
	while (temp != NULL) {
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void delbegin() {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	struct node* temp = head;
	head = head->next;
	printf("Deleted element -> %d\n", temp->data);
	free(temp);
}

void delend() {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	if (head->next == NULL) {
		printf("Deleted element -> %d\n", head->data);
		free(head);
		head = NULL;
		return;
	}
	struct node* temp = head;
	while (temp->next->next != NULL)
		temp = temp->next;
	printf("Deleted element -> %d\n", temp->next->data);
	free(temp->next);
	temp->next = NULL;
}

void delpos(int pos) {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}

	if (pos == 1) {
		struct node* temp = head;
		head = head->next;
		printf("Deleted element -> %d\n", temp->data);
		free(temp);
		return;
	}

	struct node* temp = head;
	for (int i = 1; i < pos - 1 && temp != NULL; i++) {
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL) {
		printf("Invalid position\n");
		return;
	}

	struct node* delnode = temp->next;
	temp->next = delnode->next;
	printf("Deleted element pos(%d)-> %d\n",pos, delnode->data);
	free(delnode);
}

int main() {
	insertbegin(10);
	insertbegin(20);
	insertbegin(30);
	insertend(40);
	insertend(50);

	display();
	delpos(1);
	delpos(3);
	display();
}
