#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node{
    struct Node* prev; // Revious Node bc Doubly LinkedList
    char name[20];
    struct Node* next;
}Node;

// Main Menu function
int menu(){
    int index_opt;
    printf("[HOOOLLLOOWW] just a DoublyLinkedList\n\n");
    printf("[0] Traversal\n[1] ReverseTraversal\n[2] AddAtBegginig\n[3] AddAtEnd\n");

    while(true){
        printf("Please Select One (index): ");
        scanf("%d", &index_opt);
        if(index_opt < 0 || index_opt > 3){
            printf("Out of range, try again\n");
        }
        else{
            return(index_opt);
        }
    };

}

//Normal Traversal (printf from head to tail)
void traversal(Node* head){
    Node* tmp_head = head;
    printf("DATA:\n");
    while(tmp_head != NULL){
        printf("%s | ", tmp_head->name);
        tmp_head = tmp_head->next;
    }
    printf("All data printed out...\n");
}

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

void addAtBeginning(Node** head, char newName[20]) {
    Node* newHead = (Node*)malloc(sizeof(Node));
    strcpy(newHead->name, newName);
    newHead->prev = NULL;
    newHead->next = *head;

    if (*head != NULL) {
        (*head)->prev = newHead; // Updates the actual head's previous pointer
    }

    *head = newHead; // Updates the actual head pointer in main()
}

void addAtEnd(Node** tail, char newName[20]) {
    // Create a new node
    Node* newTail = (Node*)malloc(sizeof(Node));
    
    if (newTail == NULL) {
        printf("Memory Allocation Failed (newTail)\n");
        exit(1);
    }
    
    // Set the data for the new node
    strcpy(newTail->name, newName);
    newTail->next = NULL; // New tail's next is NULL
    newTail->prev = *tail; // New tail's previous points to the current tail

    // Update the current tail's next to point to the new node
    if (*tail != NULL) {
        (*tail)->next = newTail;
    }

    // Update the tail pointer to point to the new tail
    *tail = newTail;

    printf("Added '%s' as Tail (End)\n", newName);
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

    // Menu function..
    // Main loop for menu
    while (true) {
        int temp_index = menu();

        switch (temp_index) {
            case 0:
                traversal(node[0]);
                break;

            case 1:
                reverseTraversal(node[2]);
                break;

            case 2: {
                char newNameHead[20];
                printf("Please enter a Name: ");
                scanf("%s", newNameHead);
                addAtBeginning(&node[0], newNameHead);
                break;
            }

            case 3: {
                char newNameTail[20];
                printf("Please enter a Name: ");
                scanf("%s", newNameTail);
                addAtEnd(&node[2], newNameTail);
                break;
            }

            default:
                printf("Invalid Option. Exiting...\n");
                exit(0);
        }
    }


    return(0);
}
