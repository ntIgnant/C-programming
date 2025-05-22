#include <stdio.h>
#include <stdlib.h> // Headerfile to use dynamic memory allocateion with (malloc, calloc)
#include <string.h> // Headerfile to manage strings

# define BUF_NAME 100 // macro to define a value (this si linked to the execution of the pro)
                      // Whenever 'BUF_NAME' appears in the code, it will be replaced with the value '100'
                      // That's a macro
                      //
                      // It happens before the compilation, by the coprocessor and DOESN't CHECK for data type

typedef struct Person{
    int age;
    float height;
    char name[BUF_NAME]; // buffersize assigned with macro
}Person;

int main(){
    
    //Shallow copy copies the struct and pointer as they are
    //So no 'real copy' is made
    
    Person *persona1 = calloc(1, sizeof(Person)); // Dynamically allocate memory for a struct Person instance
    
    // Assign the values for the instance 'persona1'
    persona1->age = 39;
    persona1->height = 1.80;
    
    char tmp_name[BUF_NAME] = "Oscar";
    strcpy(persona1->name, tmp_name); // String copy (destination, string)

    // EXAMPLE OF SHALLOW COPY
    Person *shallowPersona1 = persona1; // This only copies the POINTER(address) of persona1
                                        // Does't 'create' a copy, so the content of persona1 will be modifiable from there

    // EXAMPLE OF DEEP COPY (copy everything manually)
    Person *deepPersona1 = calloc(1, sizeof(Person)); // Dynamically allocate memory for a new instance of Person
                                                      // (pointer) deepPersona1
    deepPersona1->age = persona1->age;
    deepPersona1->height = persona1->height;
    
    strcpy(deepPersona1->name, persona1->name); //strcpy (destination, string)

    // Free dynamically allocated memory
    free(persona1); // Here, there is no 'free(shallowPersona1)' because
                    // its address and 'persona1' addres are the SAME
    
    free(deepPersona1);

    return 0;
}
