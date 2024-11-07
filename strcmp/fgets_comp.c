#include <stdio.h>
#include <string.h>

// Now, I'm gonna compare two 'sentences'

int main()
{
	const int buff_size_sentence = 50;
	char sentence1[buff_size_sentence];
	char sentence2[buff_size_sentence];

	printf("Please enter a sentence: ");
	fgets(sentence1, buff_size_sentence, stdin);

	printf("Please enter another sentence: ");
	fgets(sentence2, buff_size_sentence, stdin);

	if(strcmp(sentence1, sentence2) == 0){
		printf("Sentence1 and Sentence2 are EQUAL!\n");
	}

	else{
		printf("Both Sentences are NOT equal...\n");
	}

	return(0);
}