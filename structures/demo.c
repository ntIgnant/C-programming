#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// struct Person
// {
// 	char name[20];
// 	int age;
// 	char country[20];
// };

// int main()
// {
// 	struct Person person1; // Create an instance of person1

// 	strcpy(person1.name, "Jiahao");
// 	person1.age = 25;
// 	strcpy(person1.country, "China");


// 	printf("\nInformation of Person 1:\nNAME: %s\nAGE: %d\nCOUNTRY: %s\n", person1.name, person1.age, person1.country);


// 	return(0);
// }


// struct Numbers
// {
// 	int number;
// };


// int main()
// {
// 	int i = 0; // Index to iterate over instances of struct Numbers

// 	struct Numbers numbers[10]; // Array of 10 structures

// 	for(i; i < 10; i++){
// 		numbers[i].number = i;
// 		printf("Number: %d\n", numbers[i].number);
// 	}


// 	return(0);
// }


typedef struct Person{
	char name[30];
	int age;
}person; // the nickname for this structure is 'person'

int main()
{
	person person1; // Create an instance of 'person structure'
	person *ptr1; // pointer to person
	ptr1 = &person1; // now, ptr contains the memory address of person1

	printf("Sizeof person1: %ld | Memory location: %p\n", sizeof(person1), ptr1); // This says the sizeof person1 is qual to 36, but it should be 34 (char 30 + 4 int) wtf

	// Now, dynamically allocate memory for a new instance of Person

	person *ptr2; // Create a pointer to a new instance of person

	ptr2 = malloc(sizeof(person)); // Dynamically allocate memory for a new instance of Person

	strcpy(ptr2->name, "ntIgnant"); // Asign a value to the pointer pointing to name in the structure
	ptr2->age = 19;

	printf("Name: %s | Age: %d\n", ptr2->name, ptr2->age);

	return(0);
}