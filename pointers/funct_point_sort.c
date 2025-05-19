#include <stdio.h>

void sort(int *p1, int *p2){
    // So, this should turn the first number as the largest one

    int tmp; // Initialize a temp-variable as a britge to manage the variables

    if(*p1 < *p2){
        tmp = *p1; // temporary assign the value of p1 to tmp
        
        *p1 = *p2; // Set the largest value for p1
        *p2 = tmp; // Set the smallest value for p2
    }
}

int main(){
    int a, b; // Initialize two int variables
    
    // I'll manage everything with pointers
    int *pA = &a;
    int *pB = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", pA, pB); // In this case, it is the same as '&a &b' bc they're addresses

    // Now, send both pointers (with its values) to the sortion function
    sort(pA, pB); //Send pointers as arguments

    printf("%d > %d\n", *pA, *pB); // The first number should always be bigger than the second one

    return 0;
}
