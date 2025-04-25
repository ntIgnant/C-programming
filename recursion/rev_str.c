#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdlib.h>


// Function to return a reversed string (Recursive method)

void Upper_str(int i, char word[], char up_str[]) {

    if (word[i] == '\0') {

        up_str[i] = '\0'; // terminate the uppercase string

        return;

    }

    up_str[i] = toupper(word[i]); // capitalize the character

    Upper_str(i + 1, word, up_str); // recurse to the next character

}


int main() {

    char my_str[] = "hello";

    int str_len = strlen(my_str);


    char uppercase_string[str_len + 1]; // +1 for '/0' termination


    Upper_str(0, my_str, uppercase_string);


    printf("The lower string is %s and the uppercase one is %s\n", my_str, uppercase_string);

}
