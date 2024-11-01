# include <stdio.h>
# include <string.h>
# include <stdbool.h>

/*
4. Palindrome Checker for Strings

    Write a function that takes a string as input
    and checks if it’s a palindrome
    (reads the same forward and backward).

    Use a loop to compare characters from both ends
    of the string.

    Test with different inputs and handle edge
    cases like single characters and empty strings.
*/

bool palindrome(char *word) // 
{
	const int buff_siz = 20; // Have a constant of the value f the buffer size

	char original_str[] = word; // Have a original copy for the comparision
	char arr_str[20]; // Same buffer size as 'user_string'
	char arr_str_reversed[20];

	bool is_palindrome = false; // the boolean value to be returned

	int i, j, k; // Counters

	for(i = 0; original_str[i] != 0; i++){ // It will iterate over the characters until one of them is \0 'End of the string'
		arr_str[i] = original_str[i]; // The string is in an array, "list of it's characters"
	}

	int arr_len = strlen(arr_str); // length of the array

	int reversed_index = (arr_len * (-1)) + 1; // This is the inversed index, to calculate the string in reverse

	k = 0; // Counter for arr_str_reversed

	for(j = 0; j > reversed_index; j--){
		arr_str_reversed[k] = arr_str[j];
		k++;
	}

	/* 	For now, arr_str should be the string in an array
		and arr_str_reversed, should be the arr_str but counted
		starting from the last character 'reversed'
	*/

	// How can I compare both
}

int main()
{
	char user_string[20];

	printf("Please enter a word (string): ");
	fgets(user_string, 20, stdin); // The string will contain an extra "\n" char at the end, it may cause problems

	printf("Str: %s\n", user_string);
	return(0);
}