#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int value = 23;
	int* pointer = &value; // Pointer pointing to the address of value

	printf("ValueL %d", *pointer); // Pointer to the pointer(so pointer to the address, meaning that the value is 23)
	*(pointer + 1) = 0;
	printf("Follow-up value: %d\n", *(pointer + 1));
	return(0);
}