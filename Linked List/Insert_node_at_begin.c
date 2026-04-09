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

//fixed position 
struct node* insertPosition(struct node* head, int Data, int pos) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = Data;
    if (pos == 1) {
        newNode->next = head;
        return newNode; // New head of the list
    }
    struct node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        free(newNode); // Position is out of bounds
        return head; // No change to the list
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head; // Head remains unchanged
}