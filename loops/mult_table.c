# include <stdio.h>

/*
2. Print Multiplication Table

    Objective: Write a program to print the multiplication table of a given number using a for loop.
    Input: An integer n.
    Output: The multiplication table of n from 1 to 10.
*/

int main()
{
    int n, i, mult;

    printf("Please enter a number: ");
    scanf("%d", &n);

    // for (initialization; condition; inc/decrement)
    for(i = 1; i <= n; i++){
        mult = i * n;
        printf("%d * %d = %d\n", n, i, mult);
    }

    return(0);
}