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

		new_list->size = 0; // The new list contains 0 items
		new_list->head = NULL; // As the new list is empty, the fist node (head) is NULL

		return(new_list);
	}
}

// Append value at last index (node = NULL)


// Insert value at a specific index
// Remove Value
// get value (print the value that is stored in the specific index)