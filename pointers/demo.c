#include <stdio.h>


int main()
{
	int num = 3;

	int *pNum = &num;
	//  pointer  address


	printf("%ld\n", sizeof(pNum));
	printf("%p\n", &num); // This is the address of numin hexadecimal (%p is the format specifier for pointers/addresess in hexadecimal)

	return(0);
}