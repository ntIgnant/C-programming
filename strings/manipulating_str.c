# include <stdio.h>
# include <string.h>


int main()
{
    char hello[] = "Hello, ";
    char my_name_is[] = "my name, is ntIgnant ";
    char wyour_name[] = "what's your name?: ";
    char user_country[30];
    char user_city[30];
    char user_full_location[50];
    char user_name[30];

    printf("%s%s\n%s\n", hello, my_name_is, wyour_name);
    fgets(user_name, 30, stdin); // Get the ful name of the user
    user_name[strcspn(user_name, "\n")] = '\0'; //strcspn stands for 'string complement span'
    // the character '\0' is the null character, which indicates the termination of a string

    printf("%s%s, nice yo meet you\n", hello, user_name);
    printf("Please enter your Country: ");
    fgets(user_country, 30, stdin);
    user_country[strcspn(user_country, "\n")] = '\0';

    printf("Enyer your City: ");
    fgets(user_city, 30, stdin);
    user_city[strcspn(user_city, "\n")] = '\0';

    // Using 'strcpy'
    // char *strcpy(char *dest, const char *src);
    strcpy(user_full_location, user_country); //Copy the string from user_country -> user_full_location
    
    // Put an space in between of the two character arrays (strings)
    strcat(user_full_location, " ");

    // Using 'strcat'
    // Concatenates (appends) one string to the end of another string
    strcat(user_full_location, user_city);

    printf("%s\n", user_full_location);
    

    return(0);

}