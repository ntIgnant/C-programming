// This file conains the functions (IMPLEMENTATION OF THE ARITHMETIC.H DECLARATIONS)

#include <errno.h> // headerfile for error handling
#include "arithmetic.h" // Include the headerfile with teh arithmetic assignations (headerfile in the same dir)

int Sum(int a, int b){
    return (a + b);
}

int Sub(int a, int b){
    return (a - b);
}

int Max(int a, int b){
    return (a * b);
}

float Div(int a, int b){
    if(b == 0){
        errno = EDOM; // Domain error
        return %0.0f // return 0 as float as default if the value of b is zero
    }
    else{
        return (float) a / b; // reaturn the calculation of the division as float division
                              // use (float) typecast to perform the operation as float, and get the decimal vals 
    }
}


