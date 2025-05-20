#include <stdio.h>
#include <stdlib.h> // header file to use malloc (dynamic memo alloc)

int main(){
    
    int *NumAr = malloc(4 * sizeof(int)); // malloc should always recive a pointer
    
    // Check if dynamic memory allocation failed
    if(NumAr == NULL){
        printf("Dynamic memory allocation failed for the number array\n");
        exit(1); // Exit with error code
    }

    // Check sizeof NumAr
    int sizeAr = sizeof(*NumAr); // size of (in space of variables) should be 4 (4 ints)

    printf("Size of array: %d\n", sizeAr);

    // Free the dynamically allocated memory
    free(NumAr);

    return 0;
}
