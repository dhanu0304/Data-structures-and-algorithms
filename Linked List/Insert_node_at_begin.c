//Insert A Node at the beginning end and return the head of the modified linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
//Insert at beginning 
struct node* insertAtBegin(struct node* head, int Data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = Data;
    newNode->next = head;
    return newNode; // New head of the list
}
//insert at end
struct node* insertAtEnd(struct node* head, int Data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = Data;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode; // New head of the list
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head; // Head remains unchanged
} 

