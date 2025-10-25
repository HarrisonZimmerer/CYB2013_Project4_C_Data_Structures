#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>



struct Node* create_node(int value) {
    // Function to create a new node
    // TODO: Implement this function
    struct Node *head = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));
    
    head->value = 45;
    head->next =NULL;
}

void insert_node(struct Node** head, struct Node* new_node) {
    // Function to insert a new node at the end of the linked list
    // TODO: Implement this function
    struct Node *newNode=malloc(sizeof(struct Node));
    
    newNode->value = 45;
    newNode->next  = NULL;
    if(*head == NULL)
         *head = newNode;
}

void print_list(struct Node* head) {
    // Function to print all the values in the linked list
    // TODO: Implement this function
    struct Node *temp = head;

    while(temp != NULL)
    {
         printf("%d->", temp->value);
         temp = temp->next;
    }
    printf("NULL\n");
}

void free_list(struct Node** head) {
    // Function to free all the memory allocated for the linked list
    // TODO: Implement this function
    
    struct Node* current = *head;
    struct Node* next;    
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}