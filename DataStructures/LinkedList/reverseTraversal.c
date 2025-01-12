#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    struct Node* prev; // Revious Node bc Doubly LinkedList
    char name[20];
    struct Node* next;
}Node;

// Reverse Traversal Function
void reverseTraversal(Node* tail){
    Node* tmp_tail = tail;
    printf("REVERSED DATA: \n");
    while(tmp_tail != NULL){
        printf("%s | ", tmp_tail->name);
        tmp_tail = tmp_tail->prev;
    }
    printf("All data printed out...\n");
}

void addAtBeginning(Node* currHead, char newName[20]){
    Node* newHead = (Node*)malloc(sizeof(Node));

    if(newHead == NULL){
        printf("Memory Allocation Failed (newHead)\n");
        exit(1);
    }

    newHead->prev = currHead;
    strcpy(newHead->name,newName);
    newHead->next = NULL;

    printf("Added '%s' as Head (Beginning)\n", newName);
}

void addAtEnd(Node* currTail, char newName[20]){
    Node* newTail = (Node*)malloc(sizeof(Node));
    
    if(newTail == NULL){
        printf("Memory Fllocation Failed (newTail)\n");
        exit(1);
    }


    newTail->prev = currTail;
    strcpy(newTail->name, newName);
    newTail->next = NULL;
    
    printf("Added '%s' as Taild (End)\n", newName);

}

int main(){
    const int node_amount = 3;

    Node* node[node_amount]; // Create 10 instances for Node (10 different Nodes)
    
    for(int i = 0; i < node_amount; i++){
        node[i] = (Node*)malloc(sizeof(Node)); // Dynamically allocate memory for the nodes
        if(node[i] == NULL){
            printf("Memory Allocation Failed!\n");
        }
        printf("Node[%d] created\n", i);
    }
    
    //Assign values and linkd the nodes
    node[0]->prev = NULL; // Bc it's the head of the DLinkedList
    strcpy(node[0]->name, "ntIgnant");
    node[0]->next = node[1];

    node[1]->prev = node[0];
    strcpy(node[1]->name, "Kit0");
    node[1]->next = node[2];

    node[2]->prev = node[1];
    strcpy(node[2]->name, "Oscar");
    node[2]->next = NULL; // Bc it's the tail of the DLinkedList

    reverseTraversal(node[2]);

    return(0);
}
