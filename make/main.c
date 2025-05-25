#include <stdio.h>
#include <stdlib.h> // headerfile to use dynamic mmeory allocation utilities (malloc, calloc)
#include <string.h> // String utilities paaaa

#include "di_persona.h" // incude headerfile with the function declarations

#define NAME_BUF 100 // macro to define the name buffersize
                     // The preprocessor will load the instruction before the compilation

typedef struct Person{
    char name[NAME_BUF];
    int age;
    float height;

}Person;

int main(){

    // Dynamically allocate memory for a person instance
    Person *persona1 = (Person*)calloc(1, sizeof(Person)); // typecast the datatype of the pointer as (*Person)
                                                           // The compiler will recive a void pointer (returned by
                                                           // malloc or calloc) and will treat the pointer with the
                                                           // specific type. (Person*) type
    
    char tmp_name[NAME_BUF];
    printf("Please enter a name: ");
    fgets(tmp_name, NAME_BUF, stdin); // fgets(destination, buffersize, stream)

    // Remove the newline-character '/n' obtained from fgets
    tmp_name[strcspn(tmp_name, "\n")] = '\0'; // use strcspn to look for the specific character, and replace it as index

    int tmp_age;
    printf("Please enter the age of the person: ");
    scanf("%d", &tmp_age);

    float tmp_height;
    printf("Now, the height of the person: ");
    scanf("%f", &tmp_height);
        
    
    // Reassign the variable data to the struct instance 'persona1'
    strcpy(persona1->name, tmp_name); // strcpy(destination, source)
    persona1->age = tmp_age;
    persona1->height = tmp_height;


    // Now, I should call the functions from the header file here
    SayName(&persona1);
    SayAll(&persona1);

    // Free the memory
    free(persona1);
    return 0;
}
