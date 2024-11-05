# include <stdio.h>
# include <string.h>


int main()
{
	char word[] = "hollow"; // It was 6 characters + \0 (because it's a string)


	int word_length = strlen(word); // Get the length of a string (!NOTE, strlen does't count the null character '\0')
	printf("The length of the word '%s' is %d\n", word, word_length);

	return(0);
}