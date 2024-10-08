# include <stdio.h>

/*
Task 2: Character Case Conversion

Instructions: Create a program that takes a single character input from the user and converts it to uppercase if it is lowercase, or to lowercase if it is uppercase.

    Input: A single character from the user.
    Output: The converted character (uppercase to lowercase or vice versa).
*/

int main()
{
    char user_char;
    char char_back;

    printf("Character convertor. just working with a and A...\n");
    printf("Please enter a character: ");
    scanf("%c", &user_char);

    switch(user_char)
    {
    case 'a':
        char_back = 'A';
        printf("%c\n", char_back);
        break;

    case 'A':
        char_back = 'a';
        printf("%c\n", char_back);
        break;
    
    default:
        printf("Something weird happend :|\n");
        break;
    }
}