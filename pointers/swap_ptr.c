#include <stdio.h>

int main(){
    
    // This is a test to swap int values with pointers
    
    int a, b; // Initialize two integer variables

    // Create the pointers to the addresses o the integers (a, b)
    int *pNuma = &a;
    int *pNumb = &b;

    // Swap? a = b and b = a
    a, b = *pNumb, *pNuma; // THIS DOESN'T WORK

    printf("%d SWAPPED %d\n", *pNuma, *pNumb);

    return 0;
}
