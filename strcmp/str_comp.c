#include <stdio.h>
#include <string.h>

/*
Basic String Comparison:

Write a program that compares two strings input by the user
and prints whether they are equal or not.
*/

int main()
{
	const int buff_siz_name = 20;
	char user_name1[buff_siz_name];
	char user_name2[buff_siz_name];

	printf("Please enter a Name: ");
	scanf("%s", user_name1); // User enters a name

	printf("Please enter a second Name: ");
	scanf("%s", user_name2); // User enters a second name

	if(strcmp(user_name1, user_name2) == 0){
		printf("Both names are EQUAL [%s - %s]\n", user_name1, user_name2);
	}

	else{
		printf("Both names are NOT equal [%s - %s]\n", user_name1, user_name2);
	}

	return(0);
}