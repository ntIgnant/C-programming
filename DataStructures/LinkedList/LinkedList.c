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
    Node* fourth = (Node*)malloc(sizeof(Node));

    // Assign the values
    head->data = 1; // Assign value '1' as the data for te first node (head)
    head->next = second; // Assign the follow-up node to the 'second' Node
    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL; // If a node has NULL for it's next, that means it's the TAIL (last node)
                         
    // Print the linked list

	
	return(0);
}
