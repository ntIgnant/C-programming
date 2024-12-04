#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Basic program to practice pointers with structs

#define MAX_NAME_SIZE 100 //Macro to define the maximum char value for the student name

typedef struct Student{
	
	char name[MAX_NAME_SIZE];
	float gpa;

	struct Student* next_node; //next node

}Student;

typedef struct Uni_class{
	struct Student* head;
	int size;

} Uni_class;

Uni_class* create_uniClass(){
	Uni_class *new_class = malloc(sizeof(Uni_class));

	if(new_class == NULL){
		printf("Memory Allocation failed\n");
		exit(1);
	}
	else{
		new_class->head = NULL; // As it is an empty class 'list' so the head is NULL/0
		new_class->size = 0; // Cuz it's empty
		printf("The new class was succesfully created\n");
		return(new_class);
	}
}

void new_student_tail(Uni_class* class, char* name, float gpa){ // Using void as function datatype because it is going to modfy the original one, not to create a new one
	Student* new_student = malloc(sizeof(Student)); // Create a pointer to an instance of Student and dynamically allocate memory
	strcpy(new_student->name, "ntIgnant");
	new_student->gpa = 2.1; // Era re malo
	new_student->next_node = NULL; // As this student is appent to the tail of the list/uni_class

	if(class->head == NULL){ // Meaning that the list/uni_class is empty
		class->head = new_student; // ??? I'm not sure ngl
	}


	else{
		Student* current = class->head;
		while(current != NULL){
			current = current->next_node;
		}

		current->next_node = new_student;
		class->size++;

		printf("The new student was succesfully added to the tail\n");
	}
}	


int main()
{

	// Function to create uni_class
	create_uniClass();

	// Function to insert new student


	// Free memory (Destructor Function)
	//....
	return(0);
}