#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    struct Node* next;
    char name[20]; // Data for this LinkedList Based stack
}Node;

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
    
    
    return(0);
}
