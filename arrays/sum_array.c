# include <stdio.h>

# define SIZE 5 // Defining the length of the array with a macro

/*
. Sum of Array Elements

    Write a program that takes an array of integers as
    input and calculates the sum of all the elements.

    Use a loop to add each element to a cumulative sum.
*/

int main()
{
	int number_array[SIZE];
	int i = 1; // Counter
	int j = 0; // Index of the array to append numbers
	int k = 0; // Counter for the for loop

	int total_sum = 0;

	do{
		printf("Enter the #%d number: ", i);
		i++;

		scanf("%d", &number_array[j]);
		j++;
	}
	while(i < SIZE);

	for(k; k < SIZE; k++){
		total_sum += number_array[k];
	}


	printf("Your numbers are [%d, %d, %d, %d]\n", number_array[0], number_array[1], number_array[2], number_array[3], number_array[4]);
	printf("The total sum of the array is %d\n", total_sum);

	return(0);
}