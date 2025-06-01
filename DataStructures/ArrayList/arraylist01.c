#include <stdio.h>
#include <stdlib.h> // Headerfile to use dynamic memory allocation functions (malloc, calloc)

typedef struct ArrayList{
    int* array; // Pointer to the array (will be reallocated if needed)
    int size; // Value for the current size of the arraylist
    int capacity; // The maximum number of elements that the array can hold
}ArrayList;

// FUNCTION: Initialize the arrayList
void initArList(ArrayList *arli){
    arli->capacity = 5; // initial hardcoded buffer size
    arli->size = 0; // initial values that the array contains

    // Dynamically allocate memory for the first
    arli->array = malloc(arli->capacity * sizeof(int));
}

// FUNCTION: Resize the array if it reaches the capacity (Will be called if the array reaches the max capacity)
void resizeArList(ArrayList *arli){
    arli->capacity *= 2; // Multiply the capacity of the arrayList by 2 (double)
    arli->array = (int*)realloc(arli->array, arli->capacity * sizeof(int)); // reallocate the memory for the current array
                                                                             // Make it twice its current size
}

// FUNCTION: Add element to the arrayList
void addElement(Arraylist *arli, int value){
    // Check if the arrayList hasn't reached the max capacity
    if(arli->size == arli->capacity){
        resizeArList(arli);
    }

    arli->array[arli->size++] = value;
}

int main(){
    
    // Initialize an array list
    ArrayList *newArLi = (ArrayList*)malloc(1 * sizeof(ArrayList));
    
    // Check for dynamic memory allocation failure
    if newArLi == NULL{
        printf("Dynamic Memory Allocateion FAILED for the Array List\n");
        exit(1); // Exit with code error (1)
    }

    // Add n
    

    return 0;
}
