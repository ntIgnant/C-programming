# include <stdio.h>
# include <string.h>

// Easy example of strcat use...

int main()
{
	char greet[30] = "Hello, "; // To use strcat, the buffersize of tha original string must be specified
	char name[] = "ntIgnant";

	strcat(greet, name); // 'append'/concatenate "ntIgnant" to "Hello, " -> "Hello, ntIgnant"

	printf("%s\n", greet);

	return(0);
}