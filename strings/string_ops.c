# include <stdio.h>
# include <string.h> //Header file for string manipulation


int main()
{
    char user_string[100]; //This is gonna be the user string
    int str_len;


    printf("Character counter (Just type something): ");
    scanf("%s", user_string);
    str_len = strlen(user_string); //This calculates the length of the string like len() in python

    printf("The string '%s' has %d characters\n", user_string, str_len);


    return(0);
}
