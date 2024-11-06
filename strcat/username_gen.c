#include <stdio.h>
#include <string.h>


/*
2. Username Generator

    Goal: Create a username by combining parts of a user’s full
    name and ID.

    Instructions:
        Prompt the user to enter their first name, last name, and
        a numeric ID.

        Concatenate the first name and the last name, followed by
        the ID.

        Print the generated username.
    Example: Input: "John", "Doe", "123". Output: "JohnDoe123".
*/

int main()
{
	char username[80]; // The final username of the user

	char name[30];
	char last_name[30];
	char user_id[20];


	printf("--Username Generator--\n");

	printf("Enter your name: ");
	scanf("%s", name);
	strcat(username, name);

	printf("Enter your last name: ");
	scanf("%s", last_name);
	strcat(username, last_name);

	printf("Enter your ID (random number): ");
	scanf("%s", user_id);
	strcat(username, user_id);

	printf("Your username is: %s\n", username);

	return(0);
}