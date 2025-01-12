#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    structure Node* prev; // Revious Node bc Doubly LinkedList
    char name[20];
    structure Node* next;
}Node;

// Reverse Traversal Function

int main(){
    int node_amount = 3;

    Node* node[]; // Create 10 instances for Node (10 different Nodes)
    
    for(int i = 0; i < node_amount; i++){
        node[i] = (Node*)malloc(sizeof(Node));
        if(node[i] == NULL){
            printf("Memory Allocation Failed!\n");
        }
        printf("Node[%d] created\n", i);
    }
    
    return(0);
}
