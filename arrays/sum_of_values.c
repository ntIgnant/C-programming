# include <stdio.h>
# include <string.h>

//defining macros for global variable values
# define AGES 4

int main()
{
	int people_ages[AGES]; // Value array with AGES value = 4
	int i = 0; // This will act as a counter
	int sum_of_ages = 0;

	for(i; i<AGES; i++){
		printf("Please enter the #%d age: ", i+1);
		scanf("%d", &people_ages[i]); // This will go over each slot of the array and will append the value to it until it reaches the maximu

		sum_of_ages += people_ages[i];	
	}

	printf("The total sum of ages is: %d\n", sum_of_ages);

	return(0);
}