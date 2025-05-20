#include <stdio.h>
#include <stdlib.h> // headerfile including dynamic memory allocation definitions (functions)


int main(){

    // Example of malloc and calloc
    
    //  malloc(total size) | returns void pointer bc void can take any value that the allocated memory will be used for
    int *numAr1 = (int *)malloc(4 * sizeof(int)); // The (int *) wors as typecast and covnerts the void pointer into int type

    // calloc(num elements, size_of_each)
    // calloc initializes all the values to ZERO
    int *numAr2 = (int *)calloc(4, sizeof(int)); // with calloc, all the values should  be initialized to ZERO

    // Print the value of both (calloc should be all 0 initialy)
    
    int len_both = 4; // just hardcoded for now

    // Values of numAr1
    printf("Malloc array {");
    for(int i = 0; i < len_both; i++){
        printf("%d ", numAr1[i]); // ?
    }
    printf("}\n");

    // Values of numaAr2
    printf("Calloc array {");
    for(int i = 0; i < len_both; i++){
        printf("%d ", numAr2[i]);
    }
    printf("}\n");


    // Free the dynamicall y allocated memory
    free(numAr1);
    free(numAr2);

    return 0;
}
