# include <stdio.h>
# include <stdlib.h>

// So this will be a basic stack implementation


// Struct for the Stack item
typedef struct StackItem{
  int value;
  struct StackItem *next; // Pointer to next node
}StackItem;


// Struct for the actual stack
typedef struct Stack{
    StackItem *top; // Pointer to the top-most node (starts with NULL value 'empty')
}Stack;

void Push(Stack *st, int val){
    // First, dynamically allocate memory for the new node
    StackItem *new_node = malloc(sizeof(StackItem));

    // Set the value to the new node
    new_node->value = val;

    // Set the pointer to the next node
    new_node->next = st->top;

    // Update the new Top
    st->top = new_node;
}

void Pop(Stack *st){
    // Check if the stack is empty
    if(st->top == NULL){
        printf("Stack Is empty\n");
        exit(1); // Exit with error code '1'
    }
    
    // Code missing....

    
}

int main(){
    
    // First, allocate memory for the stack
    Stack *new_stack = malloc(sizeof(Stack)); // The type of the pointer to the new stack is (Stack)
    if(new_stack == NULL){
        printf("Memory Allocation failed for Stack Creation\n");
        exit(-1); // Exit with error code
    }

    // Now, the values are assigned using the functions
    // - Push
    // - Pop
    // - Peek (get the top node)
    

    // Initialize the stack top (NULL for the emptys tack)
    new_stack->top = NULL;

    // Push Values
    Push(new_stack, 1); // So element '1' will be pushed into the stack
    Push(new_stack, 2);
    Push(new_stack, 3);

    // Now, Pop values (remove)

    

    return(0);
}
