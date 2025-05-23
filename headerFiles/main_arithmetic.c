#include <stdio.h> // headerfile for the input/output utilities
#include "arithmetic_utils.h" // Add the created headerfile containing the basic arithmetic functions
                              // Includes: Sum, Sub, Mult, Div
                              //
                              // Note: The way of including the "arithmetic_utils.h" headerfile is in between quotations
                              // something like <arithmetic_utils.h> would not work because C checks the path
                              // "/usr/include" if the headerfile is between <...>

int main(){
    // int num1, num2 = 10, 11; // Decalre two numbers | INVALID DECLARATION
    
    // Weird but valid declaration
    int num1 = 13, num2 = 4;
    
    // Add the functions of the 'arithmetic_utils' headerfile

    int SumResult = Sum(num1, num2); // 'Sum' functions is inside the 'arithmetic_utils' headerfile created
    int SubResult = Sub(num1, num2); // The 'Sub' function is inside the 'arithmetic_utils' headerfile created
    int MultResult = Mult(num1, num2); // The 'Mult' function is inside the 'arithmetic_utils' headerfile created
    float DivResult = Div(num1, num2); // The 'Sub' function is inside the 'arithmetic_utils' headerfile created

    printf("Sum: %d\n", SumResult);
    printf("Substraction: %d\n", SubResult);
    printf("Multiplication: %d\n", MultResult);
    printf("Division: %.3f\n", DivResult);

    return 0;
}
