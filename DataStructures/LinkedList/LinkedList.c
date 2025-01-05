#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node{
	int data; // Data here will be a number
	struct *Node next; // Pointer to the 'next node'
}Node;

int main(){
	
    Node* head = (Node*)malloc(sizeof(Node)); // Head is always the first node of the Linked List
    Node* second = (Node*)malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));

    // Assign the values
    //
	
	return(0);
}
