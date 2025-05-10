#include <stdio.h>
#include <string.h>

int read_string(char destination[], int limit) {
    // TASK: Implement this function
    // Hint: Use char chr = getc(stdin) to get a single character from the standard input
    // Hint: Check if the read char is equal to \n to detect that the user finished a line of input

    int tmp_char; // Store the character value as ASCII val
    for (int i = 0; i < limit; i++) {
        tmp_char = getc(stdin); // Get the current prompted character (as individual character) and store it as int 

        if (tmp_char == '\n') {
            destination[i] = '\0'; // If the user finishes the string with newline, terminate the string with '\0'
            return i; // Return 'i', which is the number of characters read
        } else {
            destination[i] = tmp_char; // Assign the last read character to the current index of the array
        }
    }

    // If the limit is reached, ensure that the string is null terminated
    destination[limit - 1] = '\0'; // Ensure null character at the end of the array (for the string)
    return limit; // Limit was the number of characters read in this case
}

int main() {
    int size = 1024;
    char buffer[size];

    printf("Please enter a string: ");
    int length = read_string(buffer, size);

    if (strlen(buffer) == length) {
        printf("Your string is %ld (== %d) long and is: %s\n", strlen(buffer), length, buffer);
    } else {
        printf("Something went wrong -- your string is %s\n", buffer);
    }

    return 0;
}
