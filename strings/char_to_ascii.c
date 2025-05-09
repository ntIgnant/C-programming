#include <stdio.h>


int main(){

    char user_char;

    printf("Please enter a single character: ");
    scanf("%c", &user_char); // Get the character from stdin

    printf("The ASCII number of character '%c' is '%d'\n", user_char, user_char);

    return 0;
}
