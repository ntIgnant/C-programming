#include <strdio.h>
#include <string.h>

/*
4. File Path Builder

    Goal: Simulate building a file path by appending folder names to a base path.
    Instructions:
        Define a base path in a large enough char array, like"/home/user/".

        Prompt the user to enter folder names(e.g., "Documents",
        "Projects") and append them to the path using strcat.

        Display the resulting file path after each addition.

    Example: If the user enters "Documents", then "C_projects", the final path should
    look like "/home/user/Documents/C_projects".
*/

int main()
{
	char home_path[] = "/home/user/";
	char user_dir[20];
	char full_path[50];
}