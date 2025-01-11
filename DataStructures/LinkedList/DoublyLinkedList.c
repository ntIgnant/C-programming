#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* prev; // Previous node for Doubly Linked List
    int data;          // Data stored in the node
    struct Node* next; // Next node for Doubly Linked List
} Node;

int main() {
    // Declare an array of pointers for 3 nodes
    Node* node[3];

    // Dynamically allocate memory for 3 nodes
    for (int i = 0; i < 3; i++) {
        node[i] = (Node*)malloc(sizeof(Node));

        // Check for memory allocation failure
        if (node[i] == NULL) {
            printf("Memory allocation failure\n");
            exit(1); // Exit program on failure
        }
    }
    printf("Allocation for 3 nodes was successfully done!\n");

    // Initialize the nodes
    node[0]->data = 0;
    node[0]->prev = NULL; // Head
    node[0]->next = node[1];

    node[1]->data = 1;
    node[1]->prev = node[0];
    node[1]->next = node[2];

    node[2]->data = 2;
    node[2]->prev = node[1];
    node[2]->next = NULL; // Tail

    // Print the doubly linked list
    for (int i = 0; i < 3; i++) {
        printf("Node %d: Data = %d, Prev = %p, Next = %p\n", 
            i, 
            node[i]->data, 
            (void*)node[i]->prev, 
            (void*)node[i]->next
        );
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        free(node[i]);
    }

    return 0;
}
