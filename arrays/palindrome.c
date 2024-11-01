#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
4. Palindrome Checker for Strings

    Write a function that takes a string as input
    and checks if it’s a palindrome
    (reads the same forward and backward).
*/

bool palindrome(char word[]) {
    const int buff_siz = 20; // Buffer size for the arrays
    char arr_str[buff_siz];  // Array to store original string characters
    char arr_str_reversed[buff_siz]; // Array to store reversed characters

    int i, j, k; // Counters

    // Copying characters from the input word to arr_str
    for (i = 0; word[i] != '\0' && i < buff_siz - 1; i++) {
        arr_str[i] = word[i];
    }
    arr_str[i] = '\0';  // Null-terminate arr_str

    int arr_len = strlen(arr_str); // Length of the array

    // Reverse arr_str into arr_str_reversed
    k = 0;
    for (j = arr_len - 1; j >= 0; j--) {
        arr_str_reversed[k] = arr_str[j];
        k++;
    }
    arr_str_reversed[k] = '\0';  // Null-terminate arr_str_reversed

    // Compare the original and reversed arrays
    if (strcmp(arr_str, arr_str_reversed) == 0) {
        return true;  // It's a palindrome
    } else {
        return false; // It's not a palindrome
    }
}

int main() {
    char user_string[20];

    printf("Please enter a word (string): ");
    fgets(user_string, 20, stdin); // Read the input string with a buffer size of 20

    // Remove the newline character if present
    size_t length = strlen(user_string);
    if (length > 0 && user_string[length - 1] == '\n') {
        user_string[length - 1] = '\0';
    }

    // Check if the string is a palindrome
    if (palindrome(user_string)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}