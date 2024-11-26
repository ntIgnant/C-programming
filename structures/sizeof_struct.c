#include <stdio.h>
#include <stdlib.h>


struct Person
{
	char name[20];
	int age;
	int height;
};


int main()
{
	struct Person person1;

	printf("The size of the struct is %ld\n", sizeof(person1));

	return(0);
}