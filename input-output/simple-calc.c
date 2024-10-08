# include <stdio.h>

/*
Task 3: Simple Calculator

Instructions: Write a simple calculator program that allows the user to input two numbers and an operator (+, -, *, /) and then prints the result of the operation.

    Input: Two numbers and an operator from the user.
    Output: The result of the operation.
*/

int main()
{
    char operation;
    int a, b;

    printf("Please two space separated numbers: ");
    scanf("%d %d", &a, &b);

    printf("Now enter the symbol of the operation(+ - * /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("The result of %d %c %d is %d\n", a, operation, b, a+b);
        break;

    case '-':
    printf("The result of %d %c %d is %d\n", a, operation, b, a-b);
    break;

    case '*':
    printf("The result of %d %c %d is %d\n", a, operation, b, a*b);
    break;

    case '/':
    printf("The result of %d %c %d is %d\n", a, operation, b, a/b);
    break;
    
    default:
        printf("Oops, something went wrong\n");
        break;
    }

    return(0);
}