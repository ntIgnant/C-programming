#include <stdio.h>
#include <string.h>


/*
3. Multiple String Concatenation

    Goal: Build a single sentence from multiple words using strcat.
    Instructions:
        Define a 2D array (e.g., char words[5][10]) whereeach row
        can hold a small word.

        Initialize the words array with words like
        "I", "am", "learning", "C", "programming".

        Use a loop to concatenate all words into a single sentence.
        Print the final sentence.
    Expected Output: "I am learning C programming"
*/

int main()
{
	const int max_val = 5;
	char words[max_val][10]; // 2D array, 5 elements of 10 characters (9 actually) each.
	char word_temp[10]; // The input words of the user will be temporary stored here 
	char sentence[60]; // Final string concatenation

	printf("String concatenation...\n\n");

	printf("Please enter 5 words\n");
	for(int i = 1; i <= max_val; i++){
		printf("Word #%d: ", i);
		scanf("%s", word_temp);
		for(int j = 0; j < max_val; j++){
			strcpy(words[j], word_temp);
		}
	}

	for(int k = 0; k <= max_val - 1; k++){ // Until it reaches 4 (5 elements from 0 to 4)
		strcat(sentence, words[k]);
	}

	printf("The final sentense is: \n");
	printf("%s\n", sentence);

	return(0);
	// It's not working properly :/
}