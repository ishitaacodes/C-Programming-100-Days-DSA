// Day 8: Singly Linked List Implementation


#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of a linked list
void insertAtBeginning(struct Node** headRef, int newData) {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

// Function to print the elements of a linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 8);

    // Print the linked list
    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}
