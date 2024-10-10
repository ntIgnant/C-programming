# include <stdio.h>

/*
3. Factorial Calculation

    Objective: Write a program that calculates the factorial of a number using a while loop.
    Input: An integer n.
    Output: The factorial of n.
    E.g 5! = 1x2x3x4x5 = 120
*/

int factorial(int n)
{
    int i;
    int result = 1;

    // for(initialization, condition, inc/decrement)
    for(i = 1; i <= n; i++){
        result *= i;
    }

    return(result);
}

int main()
{
    int number;

    printf("Please enter a number (positive): ");
    scanf("%d", &number);
    if(number < 0){
        printf("Bruh I said positive dumb ass\n");
    }
    else{
        
        int fact = factorial(number); // Assign the result of the function to a variable

        printf("%d! is equal to %d\n", number, fact);
    }
}