# include <stdio.h>
//This is just basic string manipuation in C

int main()
{
    char name[20] = "ntIgnant";
    char user_name[20];

    printf("Hollow, my name is %s\n", name);
    printf("Please enter your name: ");
    scanf("%s", user_name); // Strings 'char arrays' don't need '&'
    printf("Nice to meet you %s\n", user_name);

    // At this point, the input can only get the fist char array from the user "Oscar Diaz" will be "Oscar"

    return(0);
}
