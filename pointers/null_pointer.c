#include <stdio.h>

int main(){
    // So a pointer to NULL is like 'pointer nothing(address)'
    // This is a good practice to initialice pointers
    
    int *pNull = NULL; // pointer pointing to NULL as address (pointing to nothing)
    
    printf("The memory location of NOTHING is %p\n", pNull); // This is valid, but there is no memory location
                                                             // so it will return (nil)
    return 0;
}
