#include <stdio.h>
#include <stdlib.h>

// Node structure for the list
typedef struct Node{
	int data; // Data field
	struct Node* next; // Pointer to the next node
}Node;

// List structure
typedef struct List{
	Node* head; // Pointer to the first node
	int size; // NUmber of elements in the list	
}List;

// Initialize a new List
List* createList(){
	List* newList = (List*)malloc(sizeof(List));
	newList->head = NULL;
	newList->size = 0;

	return(newList);
}