# include <stdio.h>


int sizeof_array(int array[], int size)
{
	int i;
	int arr_size = 0;
	for(i = 0; i < size; i++){
		arr_size += 1;
	}

	return(arr_size);
}

int main()
{
	int arr[] = {1, 2, 3, 4};

	int arr_size = sizeof_array(arr, 4);

	printf("%d\n", arr_size);

	return(0);
}