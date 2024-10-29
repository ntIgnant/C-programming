# include <stdio.h>

int main()
{
	int my_array[] = {1, 9, 34, 2, 11};

	int arr_size = sizeof(my_array) / sizeof(my_array[0]); // Calculate the length of the array

	printf("The length of the array is %d\n", arr_size);

	return(0);
}
