#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node{
    char name[50]; // Value for this Linked List
    struct Node* next; // next is a pointer to another 'Node struct' 
}Node;

void traversal(Node* head){ // Function to get/print the data of the LinkedList
    Node* tmp = head;
    printf("Data: ");
    while(tmp != NULL){
        printf("%s -> ", tmp->name);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

int main(){
    
    Node* head = (Node*)malloc(sizeof(Node)); // First Node
    Node* tail = (Node*)malloc(sizeof(Node)); // Last Node (Node having NULL as 'next Node')
    
    // Assign the data for the Nodes
    strcpy(head->name, "Kit0");
    strcpy(tail->name, "ntIgnant");

    // Assign the 'next' to the nodes | LINK THE NODES
    head->next = tail;
    tail->next = NULL;
    
    //Function to print out the values of the LinkedList
    traversal(head);

    //Free values
    free(head);
    free(tail);
    
    return(0);
}
