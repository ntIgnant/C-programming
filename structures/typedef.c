#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Assign the struct for Person 'blueprint'
typedef struct Person{
	char name[50];
	int age;
	char birthplace;
}Person;


void new_person(Person* person, char* p_name, int p_age, char* p_birthplace){
	strcpy(person->name, p_name);
	person->age = p_age;
	strcpy(person->birthplace, p_birthplace);
}

int main(){
	
	// Declare an array of 20 pointers to Person (for 20 different usages of the blueprint Person)
	Person* people[20];
	int p_index = 0; // Index to iterate over each different person of the 20
	
	do{
		people[p_index] = malloc(sizeof(Person)); // Dynamically allocate memory for a new 'person'
	
		// Allocation failure error handling
		if(people[p_index] == NULL){
			printf("Memory allocateion FAILED\nEXIT...\n");
			exit(1);
		}

		char tmp_name[50];
		int tmp_age;
		char tmp_birthplace[50];

		char tmp_age_range[50]; // Variable to declare the age stage (child, teenager, etc) 


		printf("Enter a Name: ");
		scanf("%49s", tmp_name); // Using %49s, the scanf function will read the first 49 characters, this avoids buffere overflow error
			
		printf("Enter an age: ");
		scanf("%d", &tmp_age);

		// Cases for age range
		if(tmp_age >= 0 || tmp_age <= 12){
			strcpy(tmp_age_range, "Child");
		}
		else if(tmp_age >= 13 || tmp_age <= 19){
			strcpy(tmp_age_range, "Teenager");
		}
		else if(tmp_age == 20){
			strcpy(tmp_age_range, "Young Adult");
		}
		else if(tmp_age >= 21 || tmp_age <= 100){
			strcpy(tmp_age_range, "Adult");
		}
		else{
			strcpy(tmp_age_range, "Unidentified Age Stage");
		}

		printf("Enter a birth place: ");
		scanf("%49s", tmp_birthplace);

		new_person(people[p_index], tmp_name, tmp_age, tmp_birthplace); // Pass the arguments though the function new_person

		printf("Data For Person[%d]: %s | %d | %s\n", p_index, people[p_index]->name, people[p_index]->age, people[p_index]->birthplace);

		p_index += 1; // Increment the person index to fo the next person to enter new data

	}while(p_index < 20); //Input to create new 'instances' of Person until the number of people reaches 20

	return(0);
}
