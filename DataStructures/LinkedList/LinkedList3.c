#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the LinkedList struct (Node)
// This Node structure will be for a 'Person'
typedef struct Node{
    char name[50];
    int age;
    char city[50];
    struct Node* next; // Assign a value fr the next node
}Node;


int main(){
    Node* head = (Node*)malloc(sizeof(Node));
    Node* tail = (Node*)malloc(sizeof(Node));

    // Add functions

    // traversal()
    // addAtBeginning
    // addAtEnd
    return(0);
}
