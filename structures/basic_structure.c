# include <stdio.h>
# include <string.h>



struct Person // Basic 'structure' in C (looks like a JSON object lul)
{
	char name[30];
	int age;
	float height;
};

int main()
{
	struct Person person1; // Create a variable of type struct Person
	
	// Assign values to the fields of "person1" 

	strcpy(person1.name, "ntIgnant");
	/*strcpy copies string2, including 
	the null character, to the location tht is 
	specified in string1*/

	person1.age = 19;
	person1.height = 1.70;

	// Print out the actual values
	printf("'person1' has the following values...\n\n");
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	printf("Height: %.2lf\n", person1.height);
	return(0);
}