#include <stdio.h>
#include <stdlib.h> // Header file for malloc, exit, free, etc...3
#include <stdbool.h> // Header file for boolean variables
#include <string.h> // Header file for string manipulation tools
#include <ctype.h> // header file to use toupper and tolower


#define PHRASE_BUFF 50 // Bufer size of th phrase will be 50 bytes (50 characters)

bool StrComp(char pr1[], char pr2[]){
    // First, convert both strings to lowercase, and then compare
    int pr1_len = sizeof(pr1) / sizeof(pr1[0]); // get the length of the first string
    int pr2_len = sizeof(pr2) / sizeof(pr2[0]); // get the length of the seconds string

    if(pr1_len != pr2_len){
        return false; // if both length are not the same, that means that the string are not equal
    }
    else{
        // First conver the phrases to lowercase
        for(int i = 0; i < pr1_len; i++){
            pr1[i] = tolower(pr1[i]);
        }

        // Second str
        for(int j = 0; j < pr2_len; j++){
            pr2[j] = tolower(pr2[j]);
        }
    } 

    // Now, compare both strings
    if(strcmp(pr1, pr2) == 0){
        return true; // If there is no 'shift' between both phrases, that means they are equal
    }
    else{
        return false;
    }
}

int main(){
    
    char phrase1[PHRASE_BUFF];
    char phrase2[PHRASE_BUFF];

    printf("Please enter a phrase: ");
    fgets(phrase1,PHRASE_BUFF, stdin); // fgets(destination, buffer size, lecture channel or some shit like that)
    
    // Remove the newline-char and replace it with \0

    phrase1[strcspn(phrase1, "\n")] = '\0';
    // strcspn will find the first occurence of the assigned character '\n' and replace it with '\0'


    printf("Now, enter another phrase: ");
    fgets(phrase2, PHRASE_BUFF, stdin);
    // Replace the newlinec character with \0
    phrase2[strcspn(phrase2, "\n")] = '\0';

    bool str_equal = StrComp(phrase1, phrase2);

    switch (str_equal) {
        case 1:  // TRUE
            printf("Both Strings are EQUAL!\n");
            break;

        case 0:  // FALSE
            printf("Both Strings are FALSE!\n");
            break;

        default:
            printf("Err...\n");
            exit(1);
            //break; //DEBUGG
    } 

    printf("Comparision result: %d\n", str_equal); // 0 for true, 1 for false

    return 0;
}
