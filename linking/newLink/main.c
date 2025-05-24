#include "sayHelloHeader.h" // include the headerfile with the declaration of the function
                            // the definition is in "sayHello.c"
#include <stdio.h> // Headerfile for input ouput
#include <stdlib.h> // headerfile to use dynamic memory allocation (malloc, calloc)

# define NAME_BUF 100 // macro to define the buffersize for the name

int main(){
    
    // Dynamically allocate memory for the name
    char *my_name = (char*)calloc(1, NAME_BUF);
    
    // Get the value from the user
    printf("Enter a Name: ");
    scanf("%s", my_name); // the pointer is already an address (&...)

    // Call the function from the 'sayHello.c' file
    hello(my_name);    
    
    return 0;
}
