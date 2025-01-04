#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int numbers[10] = {1024,1023,3,4,5,6,769,8,9,10};
	
	int* p_numbers = numbers; // This is the same as int* p_numbers = &numbers[0];

	for(int i = 0; i < 10; i++){
		printf("Index: %d | Address: %p | Value: %d\n", i, p_numbers, *p_numbers);
		p_numbers += 1; // Sum up 1 to go to the next index of the array, next memory location
	}

	return(0);
}
