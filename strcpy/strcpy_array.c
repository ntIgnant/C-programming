# include <stdio.h>
# include <string.h>


 int main()
 {
 // char array[max number of values][max size of values];	
 	char name_array[3][30];
 	char input_name[30]; // To get the input name from the user
 	char first_name[30];

 	printf("Enter some names\n");

	for(int i = 0; i < 3; i++){// Ask the user to enter 3 names (from 0 to 2 -> 3 inputs)
		printf("Name #%d: ", i);
		fgets(input_name, 30, stdin); // A better input function for strings
		strncpy(name_array[i], input_name, sizeof(input_name));
	}

	strncpy(first_name, name_array[0], sizeof(name_array[0]));

	printf("The first name of the array is %s\n", first_name);

	return(0);
 }