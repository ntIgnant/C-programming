#include <stdio.h>


int main()
{
	int number = 1;
	int num_arr[3]; // Array of 3 integers (12 bytes total)

	int *pNumber = &number; // Declare a variable pointing the address to represent it as an actual number
	// A pointer is like a fucking sniper, you need the sniper(pointer) and the guy (the addres thing '&')




	printf("%ld\n", sizeof(number)); // Memory size of an integer (int = 4 bytes)
	
	printf("%ld\n", sizeof(pNumber)); // This line, and the line below represent the same thing, but one is using a variable with a pointer and the other one just the addres
	printf("%ld\n", sizeof(&number)); // Memory size of the address of "number" (memory_address = 8 bytes)


	printf("%ld\n", sizeof(num_arr)); // 12 bytes (3 integers, so 4*3 = 12)
	
	
	
	
	return(0);
}