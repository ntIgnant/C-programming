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

// TRAVERSAL function
void traversal(Node* head){
    Node* tmp_node = head;
    printf("Data Availeable:\n");
    while(tmp_node != NULL){
        printf("%s | %d | %s\n", tmp_node->name, tmp_node->age, tmp_node->city);
        tmp_node = tmp_node->next;
    }
}

// ADDATBEGINNING function
void addAtBeginning(Node* current_head, char* new_name, int new_age, char* new_city){
    Node* newHead = (Node*)malloc(sizeof(Node));
    
    strcpy(newHead->name, new_name);
    strcpy(newHead->city, new_city);
    newHead->age = new_age;
    newHead->next = current_head; // The next-node of the new head will be the previous head
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

    // main Interface
    int menu_choice;
    
    printf("[0] Traversal\n[1] addAtBeginning\n");
    printf("Select One from the index (NUMBER): ");
    scanf("%d", &menu_choice);

    switch (menu_choice){
    
        case 0:
                traversal(head);
                break;

        case 1:
                char tmp_name[50]; // Create temporary values to assign to the new nodes
                int tmp_age;
                char tmp_city[50];
                Node* current_head = head;

                printf("Name: ");
                scanf("%s", tmp_name);
                printf("Age: ");
                scanf("%d", &tmp_age);
                printf("City: ");
                scanf("%s", tmp_city);

                addAtBeginning(current_head, tmp_name, tmp_age, tmp_city);
        
    }

    // addAtEnd
    //Free dynamically allocated memory
    for() ...
    return(0);
}
