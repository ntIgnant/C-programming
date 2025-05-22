#include <stdio.h>
#include <stdlib.h> // Header file for dynaic memory allocation (malloc, calloc)
#include <stdbool.h> // Header file to have true/false boolean stuff


// Struct for the stack element
typedef struct Element{
    int value; // Actual value of the element
    struct Element* next; // Pointer to the next elemtn (element below) in the stack

}Element;

// Struct for the Stack
typedef struct Stack{
    Element* top; // This is the poiner to the address of the top-most element
}Stack;

// INIT STACK
void initStack(Stack* st){ // As argument it as a 'pointer to a stack struct'
    st->top = NULL; // Initialize the stack top with zero as the top value

    // Verify that the initialization succeed
    if(st->top == NULL){
        printf("DONE! Stack initialized\n");
    }
    else{
        printf("Error initializing the stack\n");
    }
}

// IS EMPTY?
int isEmpty(Stack* st){
    if(st->top == NULL){
        return true; // Here, '1' would be returned
    }
    else{
        return false; // Here, '0' would be returned
    }
}

// PUSH TO STACK
void push(Stack* st, int val){ // push has two args: 'pointer to a stack struct' AND 'int value'
    // Create a new 'node' or 'element'
    Element *newElem = (Element*)calloc(1, sizeof(Element)); // New element of the stack created (dynamically)

    // Verify for dynamic allocation failure
    if(newElem == NULL){
        printf("Dynamic allocation FAILED for new element\n");
        exit(1); // Exit 1 (exit with code error)
    }
    
    // IN A LINKEDLIST-BASED STACK THERE IS NO NEED TO CHECK FOR 'FULL STACK' BC LINKEDLIST IS DYNAMIC SIZED
    // BUT I AN ARRAY-BASED STACK, IT NEEDS TO BE CHECKED BEFORE ADDING A NEW ELEMENT, OTHERWISE, STACKOVERFLOW

    // Set the value
    newElem->value = val;

    // Set the pointer to the next element 
    newElem->next = st->top; // So the new element will always have 'top' as its next

    // Update the stack top
    st->top = newElem;
   
}

int pop(Stack* st){ // pop has one arg: Pointer to the stack struct
    // Check if the stack is empty
    int emptyBool = isEmpty(st); // This will return either 1(true) or false(0)

    if(emptyBool == 1){ // case where the stack IS empty (so no top to pop)
        printf("Stack UNDERFLOW!\n");
        exit(1); // Exit the program with wrrir code
    }
    else{
        Element* temp = st->top; // Create a pointer (type element struct) that points to the stack top
        int v = temp->value; // assign temp->value (the value of the node, as top) into another variable 'v'
        
        // Updated the new top
        st->top = temp->next; // Use the 'next' value of the temp to assign as the new top

        // Free the temp variable (as it is a pointer)
        free(temp);

        // Return the obptained (popped) val
        return v;
    }
}

int peek(Stack* st){ // Peek function just returns the top value (without removing it)
    // Check if the stack is empty
    int isEmp = isEmpty(st); // Get the 0 or 1 value for the 'emptyness' of the stack
    if(isEmp == 1){
        // Meaning that it is empyt...
        printf("Empty STACK!\n");
        exit(1); // exit with error code (1)
    }
    else{
        int peekVal = st->top->value;
        return peekVal;
    }
}

int main(){

    // So, for this example, the the user will prompt 3 values, and those will be added to the stack

    // To get everythin I'll use dynamic memory allocation to assign adn get everything
    int *userVals = (int*)calloc(3, sizeof(int)); // Calloc works the same way as malloc, but it initializes the values as 0
                                                  // userVals is a pointer to the base adddress of a 3 int array (dynamic)
    
    // Get the user input
    printf("Please enter the values for the stack\n");

    for(int i = 0; i < 3; i++){
        printf("Val %d: ", i+1);
        scanf("%d", &userVals[i]); 
    }
    
    // Dynamically allocate memory for the stack
    Stack *my_stack = (Stack*)calloc(1, sizeof(Stack));

    // Functions to put the values
    // For Stack: initialize, push, pop, peek
    
    // Initialize the stack (with the pointer of the synamically allocated one)
    initStack(my_stack);

    // Push the values to the stack


    // Free the dynamically allocated memory
    free(userVals);

    return 0;
}
