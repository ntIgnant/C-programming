# include <stdio.h>
# include <string.h>

// the function 'strcmp' is used to compare strings

int main()
{
	char name1[] = "ntIgnant is a person";
	char name2[] = "Oscar is a person";

	if(strcmp(name1, name2) == 0){ // with strcmp, if two string are equal, the function returns a 0, when they are different, the function returns a 1
		printf("Strings are equal\n");
	}

	else{
		printf("Strings are not equal\n");
	}

	return(0);
}