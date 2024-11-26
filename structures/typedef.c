#include <stdio.h>
#include <stdlib.h>

typedef struct Car{
	char brand[20];
	int year;
	char color [20];
}car; // Typedef assigns a 'nikname' for the struct

int main()
{
	car car1 = {"Toyota", 2005, "Gray"};
	car car2 = {"Volvo", 2014, "Black"};

	printf("Car Spects:\n");
	printf("-Brand: %s\n-Year: %d\n-Color: %s\n", car1.brand, car1.year, car1.color);

	return(0);
}