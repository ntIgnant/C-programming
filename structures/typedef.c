#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Assign the struct for Person 'blueprint'
typedef struct Person{
	char name[50];
	int age;
	char birthplace;
}Person;

int main(){
	
	// Declare an array of 20 pointers to Person (for 20 different usages of the blueprint Person)
	Person* people[20];
	int p_index = 0; // Index to iterate over each different person of the 20

	return(0);
}
