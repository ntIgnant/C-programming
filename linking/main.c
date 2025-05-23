// Include the headerfile 'arithmetic.h' to use the functionalities for arithmetic,
// implemented in 'calc.c'

#include "arithmetic.h"
#include <stdio.h>
#include <stdlib.h> // headerfile to use dynamic memory allocation utilities (malloc, calloc)

int main() {
    // To get the user menu choice I'll use dynamic memory allocation for no reason :p
    int *userOp = (int *)calloc(1, sizeof(int)); // Dynamically allocate 4 bytes for the user response (pointer)

    printf("---- Please select one of the following (index) ----\n");
    printf("[0] - Addition\n[1] - Subtraction\n[2] - Multiplication\n[3] - Division\n");

    scanf("%d", userOp); // Get the value with the address of the pointer

    // Evaluate the response using switch
    int num1, num2; // declare once, not repeatedly in each case

    switch (*userOp) {
        case 0:
            printf("please enter two numbers (space sep): ");
            scanf("%d %d", &num1, &num2);
            // Function
            printf("%d\n", add(num1, num2));
            break;

        case 1:
            printf("please enter two numbers (space sep): ");
            scanf("%d %d", &num1, &num2);
            // Function
            printf("%d\n", subtract(num1, num2));
            break;

        case 2:
            printf("please enter two numbers (space sep): ");
            scanf("%d %d", &num1, &num2);
            // Function
            printf("%d\n", multiply(num1, num2));
            break;

        case 3:
            printf("please enter two numbers (space sep): ");
            scanf("%d %d", &num1, &num2);
            // Function
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%.2f\n", divide(num1, num2));
            }
            break;

        default:
            printf("Invalid option selected.\n");
    }

    free(userOp); // always free allocated memory
    return 0;
}
