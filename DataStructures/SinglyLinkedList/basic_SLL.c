#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data; // The actuall data/value that belongs to the node
	struct Node* next; // Pointer to the next node

}Node;

typedef struct List{
	Node* head; // Pointer to the first node of the list (first value <-)
	int size; // Size of the list
}List;

// Initialization function (create_list)
List* create_list(){
	List new_list = malloc(sizeof(List)); // Create a new list, dynamically allocate memory of the same size as the structure (blueprint type shi)

	// Handle memory allocation error
	if(new_list == NULL){
		printf("The Dynamic Memory Allocation failed\n");
		free(new_list); // Free the memory for security
		exit(1); // Terminate the program
	}
	new_list->size = 0; // The new list contains 0 items
	new_list->head = NULL; // As the new list is empty, the fist node (head) is NULL

	return(new_list);
}

// Append value at last index (node = NULL)
void insert_at_tail(List* list, int data){ // When the pointer is used as argument, a copy of the structure is passed to the function, at the end it needs to be returned to be the new original
	Node new_node = malloc(sizeof(Node));

	//Argument 'data' is the new value of the new node [value|new_node]
	new_node->data = data;
	new_node->next = NULL; // As it is gonna be appent at the last index (Tail)
	return(new_node);
	// This function is probably wrong :p
}

// Insert value at a specific index
// Remove Value
// get value (print the value that is stored in the specific index)