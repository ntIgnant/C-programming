# include <stdio.h>
# include <string.h>


# define NAMES 4 //defining a macro for NAMES = 4

int main()
{
	char input_names[NAMES][30];
	int i = 0, j = 0; // Counters

	printf("Please enter some names\n");

	for(i; i<NAMES; i++){
		printf("Name #%d: ", i+1);
		scanf("%s", input_names[i]);
	}

	printf("These are all the names: \n");
	for(j; j<NAMES; j++){
		printf("%d. %s\n", j, input_names[j]);
	}

	return(0);
}