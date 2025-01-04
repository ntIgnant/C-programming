#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int numbers[10] = {1024,1023,3,4,5,6,769,8,9,10};
	
	unsigned char* p_numbers  = (unsigned char*)numbers; // This is the same as &numbers[0];
				       // Instead of using an pointer to anint int*, here we use an unsigned pointer to a char char*
				       // This will have a range from 0 - 255 (only non-negative values)
				       // Each value of char in bytes is 1 (8 bits)

	for(int i = 0; i < 10; i++){
		printf("Index: %d | Address: %p | Value: %d\n", i, p_numbers, *p_numbers);
		p_numbers += 4; // Sum up 1 to go to the next index of the array, next memory location
	}

	return(0);
}
