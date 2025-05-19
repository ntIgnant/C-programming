#include <stdio.h>

void increment(int *n){ // Function has a pointer as argument
    *n = *n + 1; // increment the actual value of the pointer (value at addrss) + 1
}

int main(){
    
    int num; // Initialize int variable

    int *pNum = &num; // Assing a pointer that points to the num memory location (address)
    *pNum = 10; // Change the actual value of that address (the value of num, now will be 10)
    
    increment(pNum); // Pass the pointer of num to the function

    // Now, the value of *pNum (or just num) should be 11
    printf("The value of num is %d and it is stored at %p\n", *pNum, pNum);

    return 0;
}
