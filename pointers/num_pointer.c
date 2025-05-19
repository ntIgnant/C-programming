#include <stdio.h>

int main(){

    int num1 = 10; // Assign int variable
    int *pNum1 = &num1; // Poiter pointing to the address of num1
    printf("The number %d is stored at %p in memory\n", *pNum1, pNum1);

    // Assign a value from a dereference pointer
    int a; // Initialize an int variable
    int *pNum2 = &a; // Declare a pointer variable pNum2
    *pNum2 = 11; // Assign the dereferenced (*) to have the value 11 | it is like, the value of (the derreferrenced addrss) is 11
    printf("The number %d is stored at %p in memory\n", *pNum2, &pNum2);

    return 0;
}
