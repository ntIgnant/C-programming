#include <stdio.h>
#include <stdlib.h>

// Node structure for the list
typedef struct Node{
	int data; // Data field
	struct Node* next; // Pointer to the next node (Pointer to the same struct, it's nessesary to create linked data structures)
}Node;

Node *head = NULL; //Initialize the head of the List as a global pointer (Its the First '<-' value of the list)

// Insert a value at the begining
Node *insert_at_beginning(Node *head, int value){
	Node *new_node = malloc(sizeof(Node)); // Create a pointer to an instance and Dynamically allocate memory for it "new_node"
	
	// Handle "memory allocation error"
	if(new_node == NULL){
		printf("Memory Allocation Failed\n");
		free(new_node); // Free the memory for security
		exit(1); // Exit the code
	}

	// Redirect the values to their actual locations using pointers (arrows ->)
	new_node->data = value; // same as *(new_node).data = value
	new_node->next = head;

	return(new_node); // Return the new updated node with the new value
}

// Insert at end funct
Node *insert_at_end(Node *head){
	Node *new_node = malloc(sizeof(Node)); // Create a pointer to a new instance for the new Node with Dynamic memory

	// Handle "Memory allocation Error"
	if(new_node == NULL){
		printf("Memory Allocation Failed\n");
		free(new_node); // Free the memory for security
		exit(1); // Exit the code
	}

	if(head == NULL){
		// This means that if the head value passed though the function is NULL, by logic, that node would be the last one
		return(new_node); 
	
	}

	Node *temp = head; // Create a pointer to an instance and make it equal to the head of the actual Node

	while(temp->next != NULL){ // Will go over the Nodes, and while the node is not NULL (meaning is the last noode), temp
		temp = temp->next; // The 'new' temp is gonna be the last checked != NULL 'next'	
	}

	temp->next = new_node;
	/*
	When the while loop terminates, it means that it found the Tail of the list
	(NULL next, last node) so the new_node is going to be in that position
	'temp->next = new_node' meaning that, that node is now in the 'tail'
	*/

	free(temp); // Free the temporary pointer

	return(head); // Return the head value for further list manipulation (used for reference)
}

// Delet the node funct
Node *delete_node(Node *head){

	// Check if the list is empty
	if(head == NULL){ // If the current head is NULL, it means that there is nothing in the list
		printf("The list is empty\n");
		exit(1);
	}

	Node *temp = head; // Create a temporary pointer instance and set it to the value of head (the current value of the head of the list)
	head = temp->head; // Update the new 'head' with the value of the temp pointer

	free(temp); // Free the temporary pointer

	return(head); // Return the new/updated head
}

// .... chatgpt
// Delete from end
// Search in the list Funct