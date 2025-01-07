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

void traversal(Node* head){
    Node* tmp_node = head;
    printf("Data Availeable:\n");
    while(tmp_node != NULL){
        printf("%s | %d | %s\n", tmp_node->name, tmp_node->age, tmp_node->city);
        tmp_node = tmp_node->next;
    }
}

int main(){

    // Create the initial Nodes (head and tail)
    Node* head = (Node*)malloc(sizeof(Node));
    Node* tail = (Node*)malloc(sizeof(Node));

    // Add the vaues of the initial Nodes
    strcpy(head->name, "Kit0");
    strcpy(head->city, "Loja");
    head->age = 19;
    head->next = tail; // Linkd the node to it's next

    strcpy(tail->name, "ntIgnant");
    strcpy(tail->city, "Quito");
    tail->age = 19;
    tail->next = NULL; // next-node is NULL for the tail (last node)

    // Add functions

    // traversal() ...Pinrt out the data of the LinkedList
    traversal(head);

    // addAtBeginning
    // addAtEnd
    //Free dynamically allocated memory
    free(head);
    free(tail);
    return(0);
}
