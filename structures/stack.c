#include <stdio.h>
#include <stdlib.h>


typedef struct stack
{
	int *array; // Where the actual values are gonna be stored
	int top;
	int size;
}stack;

void *make_stack(int size){
	stack1->array = malloc(size * sizeof(int)); // Dynamically allcoate memroy for the (array) of the stack

	if(stack1->array == NULL){
		printf("The Dynamic allocation of the memory failed\n");
		free(stack1->array); // Free in case of error
		exit(1); // Exit the program
	}
}

int main()
{
	stack stack1;
	*stack1 = malloc(sizeof(stack)); // Create an instance pointer to stack (stack1) and dynamically allocate memroy for it

	printf("Please enter a size: ");
	scanf("%d", &stack1->size); //Store the result of size as one of the parameters of stack1 (stack1->size)

	// Create the stack array
	make_stack(stack1->size);

	//DEBUGGING
	printf("The size of the stack is %ld\n", sizeof(stack1->array));


	// Free the memory
	free(stack1->array);
	free(stack1->size);
	free(stack1);

	return(0);
}