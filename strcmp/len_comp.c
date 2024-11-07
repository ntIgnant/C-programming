#include <stdio.h>
#include <string.h>

/*
String Length Comparison:

Write a program that compares two strings and prints the
string that is longer.

If both strings have the same length, print
"Both strings have the same length."
*/

int main()
{
	const int buf_siz_str = 40;
	char str1[buf_siz_str];
	char str2[buf_siz_str];

	printf("Enter a Name: ");
	fgets(str1, buf_siz_str, stdin);
	str1[strcspn(str1, "\n")] = '\0'; // Change the new-line-char for a null-char to avoid wierd things lul

	printf("Enter a second Name: ");
	fgets(str2, buf_siz_str, stdin);
	str2[strcspn(str2, "\n")] = '\0';

	int len_s1 = strlen(str1);
	int len_s2 = strlen(str2);

	if(len_s1 == len_s2){
		printf("Both Strings are from the same size\n");
	}

	else if(len_s1 > len_s2){
		printf("The First string is larger than the Second one\n");
	}

	else{
		printf("The Second string is greater than the First one\n");
	}

	return(0);
}