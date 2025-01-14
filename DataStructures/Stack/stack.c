#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    struct Node* next;
    char name[20]; // Data for this LinkedList Based stack
}Node;

void push(Node* head){
    Node** tmp_head = head;

}

int menu(){
    int menu_index;
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
