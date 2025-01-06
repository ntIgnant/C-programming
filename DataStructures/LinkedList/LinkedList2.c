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

void insertAtBeginning(Node** head, char name[50]){ // Function to add a new Node to the Linked List
    Node* newNode = (Node*)malloc(sizeof(Node));
    char tmp_name[50];

    // Get the new name
    printf("New Name: ");
    scanf("%s", tmp_name);

    strcpy(newNode->name, tmp_name);
    newNode->next = head; // The newNode will be the new head
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

    //Function to add a new Node to the beginning
    
    insertAtBeginning();

    //Free values
    free(head);
    free(tail);
    
    return(0);
}

    //Free values
    free(head);
    free(tail);
    
    return(0);
}
