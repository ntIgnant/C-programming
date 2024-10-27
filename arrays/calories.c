# include <stdio.h>
# include <string.h>


# define MEALS 3
/*
"define" works as a 
macro to define variables thought the program.
In this case, the macro will define "MEALS" as "3"

define macros have global scope
*/

int main()
{
	int user_calories[MEALS]; // This will create a "list" or array of values. 3 values, defined by MEALS 
	int x;
	int total_calories = 0;

	puts("Calories Counter"); //Alternative to "printf". "puts" adds an \n to the end of the string automatically
	for(x = 0; x<MEALS; x++){
		printf("Calories at meal %d: ", x+1);
		scanf("%d", &user_calories[x]); // This will 'append' the value into the array "user_calories" that will contain 3 different values
		total_calories += user_calories[x]; 
	}

	printf("The total of your calories is %d\n", total_calories);

	return(0);	
}