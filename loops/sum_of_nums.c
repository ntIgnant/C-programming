# include <stdio.h>

/*
1. Sum of Natural Numbers

    Objective: Write a program to calculate the sum of the first n natural numbers using a for loop.
    Input: An integer n.
    Output: The sum of the first n numbers.
*/

int main()
{
    int n, i;
    int sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &n);

    // for (initialization; condition; increment/decrement)
    for(i = 1; i <= n; i++){
        sum += i;
    }

    printf("The sum of all natural numbers from 1 to %d is %d\n", n, sum);
    return(0);
}