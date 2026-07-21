#include <stdio.h>      // Standard input-output functions (printf, scanf)
#include <stdlib.h>     // Memory allocation (malloc, free, exit)

// Define structure of a node in linked list
struct Node {
    int data;              // Stores the value of the node
    struct Node* next;     // Pointer to next node in the list
};

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;   // Create a temporary pointer to traverse list

    // Check if list is empty
    if (temp == NULL) {
        printf("List is empty\n");   // Print message if no nodes
        return;                     // Exit function
    }

    printf("Linked List: ");   // Print heading

    // Traverse until last node (NULL)
    while (temp != NULL) {
        printf("%d -> ", temp->data);   // Print current node data
        temp = temp->next;              // Move to next node
    }

    printf("NULL\n");   // Indicate end of list
}

// Insert node at beginning
struct Node* insertBeginning(struct Node* head, int data) {

    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;     // Assign value to new node
    newNode->next = head;     // Point new node to current head

    return newNode;           // New node becomes new head
}

// Insert node at end
struct Node* insertEnd(struct Node* head, int data) {

    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;     // Assign value
    newNode->next = NULL;     // Last node always points to NULL

    // If list is empty
    if (head == NULL)
        return newNode;       // New node becomes head

    struct Node* temp = head;   // Start traversal from head

    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;   // Link last node to new node

    return head;            // Head does not change
}

// Delete a node by value
struct Node* deleteNode(struct Node* head, int value) {

    struct Node* temp = head;   // Pointer to traverse list

    // Case 1: If first node contains the value
    if (temp != NULL && temp->data == value) {
        head = temp->next;   // Move head to next node
        free(temp);          // Free memory of old head
        return head;         // Return updated head
    }

    // Search for node before the one to delete
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;

    // If node found
    if (temp->next != NULL) {
        struct Node* del = temp->next;     // Node to delete
        temp->next = temp->next->next;     // Skip the node
        free(del);                         // Free memory
    } else {
        printf("Value not found\n");       // If value doesn't exist
    }

    return head;   // Return updated head
}

// Search element in list
void search(struct Node* head, int key) {

    struct Node* temp = head;   // Start from head
    int pos = 1;                // Position counter

    // Traverse list
    while (temp != NULL) {
        if (temp->data == key) {           // If value found
            printf("Found at position %d\n", pos);
            return;                        // Exit function
        }
        temp = temp->next;   // Move to next node
        pos++;               // Increment position
    }

    printf("Not found\n");   // If value not found
}

// Update a value in list
void update(struct Node* head, int oldVal, int newVal) {

    struct Node* temp = head;   // Start from head

    // Traverse list
    while (temp != NULL) {
        if (temp->data == oldVal) {   // If value matches
            temp->data = newVal;      // Update value
            printf("Updated successfully\n");
            return;
        }
        temp = temp->next;   // Move to next node
    }

    printf("Value not found\n");   // If not found
}

// Main function
int main() {

    struct Node* head = NULL;   // Initially list is empty

    int choice, data, value, newVal;   // Variables for user input

    while (1) {   // Infinite loop for menu

        // Display menu
        printf("\n1.Insert Beginning\n2.Insert End\n3.Delete\n4.Display\n5.Search\n6.Update\n7.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);   // Take user choice

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &data);
                head = insertBeginning(head, data);   // Update head
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &data);
                head = insertEnd(head, data);   // Insert at end
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);   // Delete node
                break;

            case 4:
                display(head);   // Display list
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(head, value);   // Search element
                break;

            case 6:
                printf("Enter value to update: ");
                scanf("%d", &value);
                printf("Enter new value: ");
                scanf("%d", &newVal);
                update(head, value, newVal);   // Update value
                break;

            case 7:
                exit(0);   // Exit program

            default:
                printf("Invalid choice\n");   // Invalid input
        }
    }
}