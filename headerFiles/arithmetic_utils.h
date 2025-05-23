// So this file is gonna contain basic arithmetic functions
// I will use this file as a headerfile to (include) these functions in another program

// #include <stdio.h> // No need to use stdio.h because there is no imput/output usage in the code (printf, gets, fgets, scanf)

#include <errno.h> // Headerfile to manage the error (zero division error) properly

// Basic math functions that returns the sum of two numbers
int Sum(int a, int b){
    int result = a + b;
    return result;
}

// Basic math function that return the substraction of two numbers
int Sub(int a, int b){
    int result = a - b;
    return result;
}

// Function that returns the multiplication of two numbers
int Mult(int a, int b){
    int result = a * b;
    return result;
}

// Function that returns the division of two numbers
float Div(int a, int b){
    // Check if b = 0 (zero division problem)
    if(b == 0){
        errno = EDOM; // Doman Error
        return 0.0f;
    }
    else{
        float result = (float) a / b; // Typecast to convert the operation as a float operation
                                      // otherwise it will just perform the operation as in (without decimals)
        return result;
    }
    
}
