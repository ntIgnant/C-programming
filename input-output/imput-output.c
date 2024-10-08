# include <stdio.h>

/*
Task 1: Sum of Two Numbers

Instructions: Write a C program that asks the user to input two integers and prints their sum.

    Input: Two integers from the user.
    Output: Print the sum of the two integers.
*/


int int_sum(int num1, int num2)
{
    int result = num1 + num2;
    return(result);
}

int main()
{
    int a, b;
    
    printf("Please enter a number: ");
    scanf("%d", &a);
    printf("Please enter another number: ");
    scanf("%d", &b);

    int final_sum = int_sum(a, b); // Store the result value as the result of the function result

    printf("The sum of %d + %d is equal to %d\n", a, b, final_sum);

    return(0);
}