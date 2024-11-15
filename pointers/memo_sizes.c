#include <stdio.h>
#include <string.h>


// This programm will check the size (in bits) of the following datatypes

int main()
{
	int a = 1;
	char ch[] = "abc";

	printf("%ld\n", sizeof(a)); // %ld stands for long integer (integer with a really large value)
	// The size of a is 4, meaning that an integer=4 bytes of memory (8 bits = 1 byte) so 8*4 = 32 BITS of memory

	printf("%ld\n", sizeof((double)a));
	// The size of a double in bytes is 8 (8*8 = 64 BITS)

	printf("%ld\n", sizeof(ch)); // check the memory size of an integer (will be the \0 character)
	
	return(0);
}