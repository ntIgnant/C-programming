#include <stdio.h>
#include <stdlib.h> // to use malloc
#include <stdbool.h> // to use boolean variables true false


// Here I will dynamically allocate a lot of memory to see what happens
int main(){
    
    while(true){
        int* ptr = malloc(sizeof(int) * 10000); // Dynamically allocate an insane amount of memory
    
        while(ptr == NULL){
            printf("Dynamic Memory Allocation failed\n");
            break;
        }

        for(int i = 0; i < 10000; i++){
            ptr[i] = i; // Force to use the dynamically allocated memory to exaust the system
        }
    }

    // I'll not free it on purpose
    return 0;
}
