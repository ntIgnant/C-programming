#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Node{
    char name[20]; // Data for this LinkedList Based stack
    struct Node* next;
}Node;

void push(Node* head, char new_name[20]){
    Node* new_head = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node

    // Assign values
    strcpy(new_head->name, new_name);
    new_head->next = NULL; //Bc it's gonna be the new head (it has no next pointer)

    // RE-Assign the next-node of the last head
    Node* last_head = head;
    last_head->next = new_head;
    
}

int menu(){
    int menu_index;

    // Allocate memory for the first node
    Node* node0 = (Node*)malloc(sizeof(Node));

    // Assign the values/info for node0
    strcpy(node0->name, "Name0");
    node0->next = NULL; // NULL bc it's the head

    printf("Menu for LinkedList-based stack...\n");

    while(true){
        printf("Please select one of the following (index): ");
        scanf("%d", &menu_index);
        if(menu_index < 0 || menu_index > 2){ // range 0 - 2 bc of just 3 functions in this program (push, pop, get)
            printf("Please try again (out of range)\n");
        }
        else{
            return(menu_index);
        }
    } 
}

// Stack has 3 main functions (push, pop, get...?)


int main(){

    Node* node0 = malloc(sizeof(Node));
    if(node0 == NULL){
        printf("Dynamic memo allocation for initial node\n");
        exit(1);
    }
    else{
        printf("Oke (initial node)\n");
    }

    int tmp_menu_index;
    while(true){
        tmp_menu_index = menu();

        switch(tmp_menu_index){
            case 0:
                //push function here
                char tmp_name[20];
                printf("Please enter a name: ");
                scanf("%s", tmp_name);
                push(node0, tmp_name); // Pass the values (initial node, new_name for the new node)
                menu();

            case 1:
                //pop function here
                menu();

            case 2:
                // get function here (I think it was get)
                menu();

            default:
                break; //Default option (this one is unreachable rn)
        }
    }
    

    return(0);
}
