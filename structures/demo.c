#include <stdio.h>
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


struct Numbers
{
	int number;
};


int main()
{
	int i = 0; // Index to iterate over instances of struct Numbers

	struct Numbers numbers[10]; // Array of 10 structures

	for(i; i < 10; i++){
		numbers[i].number = i;
		printf("Number: %d\n", numbers[i].number);
	}


	return(0);
}