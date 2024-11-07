#include <stdio.h>
#include <string.h>

/*
Lexicographical Order Comparison:

Write a program that compares two strings and prints
the result:

"First string is lexicographically greater,"
"Second string is lexicographically greater,"
or
"Both are equal."
*/


/*
Lexicographical order is the order in which strings are
sorted based on the numerical values of its characters
in the ASCII o (UNICODE) character set 'dictionary'. 
*/

int main()
{
	const int buff_siz_name = 30;
	char name1[buff_siz_name];
	char name2[buff_siz_name];

	printf("Please enter a name: ");
	fgets(name1, buff_siz_name, stdin);
	name1[strcspn(name1, "\n")] = '\0';
	//string[]'string with index'. string[strcspn(destination, "value of the string looking for")] = 'null character'

	printf("Please enter a second name: ");
	fgets(name2, buff_siz_name, stdin);
	name2[strcspn(name2, "\n")] = '\0';

	if(strcmp(name1, name2) == 0){
		printf("Names are EQUAL!\n");
	}

	else if(strcmp(name1, name2) < 0){
		printf("The Name '%s' is Lexicographically greater than '%s'\n", name2, name1);
	}

	else{
		printf("The Name '%s' is Lexicographically greater than '%s'\n", name1, name2);
	}

	return(0);
}