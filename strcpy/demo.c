# include <stdio.h>
# include <string.h>

// First try with strcpy...

int main()
{
	char name[] = "ntIgnant";
	char dupl_name[30]; // The name value will be copied here


	char name2[] = "Oscar es un gay"; // the string contains 15 characters (+ 1 for \0 -> 16)
	char dupl_name2[10]; // just 10 of buffer size

//	strcpy(destination, source);
	strcpy(dupl_name, name);
	printf("%s\n", dupl_name);

//	sizeof(destination, source, buffersizeof(destination)); // This is to get the bufferize of the destination to just copy the availeable characters if the buffersize is to low
	strncpy(dupl_name2, name2, sizeof(dupl_name2) - 1); // Use strncpy to copy a string and define the buffersize to get something copied ( - 1 for the null character)
	printf("%s\n", dupl_name2);


	return(0);
}