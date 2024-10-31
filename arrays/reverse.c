# include <stdio.h>
# include <string.h>


/*
3. Reverse an Array

    Write a function that takes an array of integers 
    and its size, and reverses the order of its elements.

    Display the array before and after reversing it.
*/


# define LENGTH 4 // Defininf the length of the array using define/macro


void reverse(int numbers[], int reversed[])
{
    int j;

    for (j = 0; j < LENGTH; j++) {
        reversed[j] = numbers[LENGTH - 1 - j];  // Copy elements in reverse order (it will start from 3 and end at 0, 4 elements total)
    }

    // This will just change things instead of returning an specifed value (void)
}

int main()
{
	int numbers[LENGTH];
	int reversed[LENGTH]; // Reverse list array
	int i; // Counter

	printf("-Please enter 4 values-\n");

	for(i = 0; i < LENGTH; i++){
		printf("Enter value: ");
		scanf("%d", &numbers[i]);
	}


	printf("Original array:\n");
	printf("{%d, %d, %d, %d}\n", numbers[0], numbers[1], numbers[2], numbers[3]); // Print out the original array with it's values


	reverse(numbers, reversed);

	printf("Reversed array:\n");
	printf("{%d, %d, %d, %d}\n", reversed[0], reversed[1], reversed[2], reversed[3]);
	
	return(0);
}