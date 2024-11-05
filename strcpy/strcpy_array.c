# include <stdio.h>
# include <string.h>


 int main()
 {
 // char array[max number of values][max size of values];	
 	char name_array[3][30];

 	printf("Enter some names\n");
 	do{
 		for(int i = 1; i < 4; i++){ // Ask the user to enter 3 names (from 1 to 4 -> 3 inputs)
			printf("Name #%d: ", i);
 		}
 	}
 }