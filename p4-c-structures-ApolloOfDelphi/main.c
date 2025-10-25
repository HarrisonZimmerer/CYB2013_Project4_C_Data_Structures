#include <stdio.h>
#include "linked_list.h"

int main() {
    // Create the first new node
    struct Node* node1 = create_node(5);
    if (node1 == NULL) {
        printf("Failed to create node.\n");
        return -1;
    }

    // Create a head for the linked list
    struct Node* head = NULL;

    // Insert the fist new node into the linked list
    insert_node(&head, node1);

    // Create the second new node
    struct Node* node2 = create_node(10);

    // Insert the second new node into the linked list
    insert_node(&head, node2);

    // Print the linked list
    printf("Linked list: ");
    print_list(head);

    // Free the linked list
    free_list(&head);

    return 0;
}
