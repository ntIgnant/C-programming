# include <stdio.h>
# include <string.h>

int main()
{
    char user_name[30];
    prinf("Hollow\n");
    printf("Please enter your name: ");
    // scanf("%s", user_name); // This will get just the string until the fist space
    fgets(user_name, 30, stdin); // fgets gets the full string but has a \n at the end
    user_name[strcspn(user_name, "\n")] = '\0'; // 'strcspn' will delete the '\n' character
    printf("Hello '%s' nice to meet you\n", user_name);


    return(0);
}
