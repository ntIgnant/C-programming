#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* prev; // previous node for Doubly Linked List
    int data;
    struct Node* next;

}Node;

int main(){
    
    // Dynamically allocate memory with a for loop (for 3 nodes)
    for(int i = 0; i < 3; i++){
        Node* node[i] = (Node*)malloc(sizeof(Node));

        //check for memory allocation failure
        if(node[i] == NULL){
            printf("Memory allocation failure\n");
            exit(1);
        }
        printf("Allocation for 3 nodes was successfully done!\n");
    }

    node[0]->data = 0;
    node[0]->prev = NULL; // Head
    node[0]->next = node[1];

    node[1]->data = 1;
    node[1]->prev = node[0];
    node[1]->next = node[2];

    node[2]->data = 2;
    node[2]->prev = node[1];
    node[2]->next = NULL; // Tail
    

    // Free memory
    for(int i = 0; i < 3; i++){
        free(node[i]);
    }

    return(0);
}
