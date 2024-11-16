#include <stdio.h>
#include <string.h>


// This programm will check the size (in bits) of the following datatypes

int main()
{
	int a = 1;
	char ch[] = "1234";

	printf("Int memory size (Bytes): %ld\n", sizeof(a)); // %ld stands for long integer (integer with a really large value)
	// The size of a is 4, meaning that an integer=4 bytes of memory (8 bits = 1 byte) so 8*4 = 32 BITS of memory

	printf("Double memory size (Bytes): %ld\n", sizeof((double)a));
	// The size of a double in bytes is 8 (8*8 = 64 BITS)

	printf("String '1234' memory size (Bytes): %ld\n", sizeof(ch)); // check the memory size of an integer (will be the \0 character)
	// The size of a character in a string is 1 byte
	
	printf("Char memory size (Bytes): %ld\n", sizeof(ch[0])); // Check the size of a character of the string
	// A character of a string is equal to 1 byte in memory (8 bits)

	printf("Address-data-type memory size (Bytes): %ld\n", sizeof(&a)); // This is the size of the address of a (&a)
	// It depends on the system architecture, but generally in modern systems an address datatype is 8 bytes of memory



	return(0);
}