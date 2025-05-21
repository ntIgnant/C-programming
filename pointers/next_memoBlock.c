#include <stdio.h>
#include <stdlib.h> // headerfile for the dynamic memory allocation (malloc, calloc)


int main(){
    
    // Tryout to access the next 'memory block' of an assigned static variable
    // Each 'step/block' of memory is equivalent to 1 byte (8 bits)
    
    int num1 = 11;

    int *pNum1 = &num1; //assign a pointer that points to the address of num1

    // So, here I'll try to access 1 byte of memory forward starting from the memory address of num1

    unsigned char *bytePtr = (unsigned char *)&num1;

    // Access each byte of num1
    for(int i = 0; i < sizeof(int); i++){
        printf("Byte %d: %02x\n", i, bytePtr[i]); // There is no way I'm gonna have this in the exam but oukeee
    }

    return 0;
}
