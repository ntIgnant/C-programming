#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// int main()
// {
// 	int num = 3;

// 	int *pNum = &num;
// 	//  pointer  address


// 	printf("%ld\n", sizeof(pNum));
// 	printf("%p\n", &num); // This is the address of numin hexadecimal (%p is the format specifier for pointers/addresess in hexadecimal)

// 	return(0);
// }




// int main()
// {
// 	int number = 5;
// 	printf("%p\n", &number); // Address of the vaariable number in hex

// 	int *pNumber = &number;
// 	printf("%p\n", pNumber); // Address of variable 'number' stored in pNumber
// 	printf("%d\n", *pNumber);
// 	printf("%d\n", *&number); // 'Give me whatever is in the address of number' that's = int 5

// 	return(0);
// }


// int main()
// {
// 	int age = 33;
// 	int *pAge = &age; // The pointer needs to have the same dataype as the varianble that is pointing to


// 	printf("%ld\n", sizeof(pAge));
// 	printf("%p\n", pAge); // Address of the value of variable "name"
// 	printf("%d\n", *pAge);

// 	return(0);
// }


// int main()
// {
// 	int *pNull = NULL;

// 	printf("%p\n", pNull); // This pointer points to an empty object (nil)


// 	return(0);
// }


// void add_one(int *n)
// {
// 	if(n == NULL){
// 		printf("Empty value\n");
// 	}

// 	*n += 1;
// }

// int main()
// {
// 	int number = 10;
// 	int *pNumber = &number;

// 	add_one(&number);
// 	printf("The new value is %d\n", number);
// 	printf("Location in memory: %p\n", pNumber);
// }


// int main()
// {
// 	int *future_num = malloc(sizeof(int) * 1);

// 	printf("%d\n", *future_num); // This will print out that's the address of future_num contains, that is 0/null
// 	printf("Location in memory: %p\n", future_num); // Location in memory of future_num (doesn't contain anything but it's there)
// 	printf("Size: %ld\n", sizeof(future_num)); // Size for 1 integer



// 	return(0);
// }



// void print_int_array(int *array, int size){
// 	for(int k = 0; k < size; k++){
// 		printf("%d ", array[k]);
// 	}
// }

// int main()
// {
// 	int *num_array = malloc(5 * sizeof(int)); // Allocate memory for an array of 5 integers
// 	int size = (5 * sizeof(int)); // Set the size of the array

// 	for(int i = 0; i < size; i++){
// 		num_array[i] = i;
// 	} // At this point, I should have a an array like: [0, 1, 2, 3, 4]

// 	print_int_array(num_array, size);

// 	printf("\n");
// 	return(0);
// }


// int main()
// }
// 	char word[30];

// 	int counter = 0; // Count the size of the new allocated memory

// 	printf("Please enter a word: ");
// 	scanf("%s", word);

// 	for(int i = 0; i < sizeof(word); i++){
// 		getchar(word[i]);
// 		if(getchar(word[i]) == '\n'){
// 			break;
// 		}
// 		else{
// 			counter++;
// 		}
// 	}

// 	printf("The counter is: %d\n", counter);

// 	return(0);
// }


// int main()
// {
// 	int array;

// 	int *pArray = &array;

// 	pArray = malloc(3 * sizeof(int));

// 	printf("The memory size of array is %ld\n", sizeof(*pArray));


// 	return(0);
// }


// int main()
// {
// 	int tmp_num;

// 	int *pNum = (int*)malloc(3 * sizeof(int)); // Dynamically allocate memory for 3 integers

// 	for(int i = 0; i < 3; i++){
// 		printf("Enter a number: ");
// 		scanf("%d", &tmp_num);
// 		pNum[i] = tmp_num;

// 	}


// 	printf("The value stored in the address [%p] 'num' is {%d, %d, %d}\n", &pNum, pNum[0], pNum[1], pNum[2]);

// 	return(0);
// }



// int main()
// {
// 	int numbers[] = {1, 2, 3, 4, 5}; // Array of numbers
// 	int array_length = sizeof(numbers) / sizeof(numbers[0]); // Each int is equal to 4 bytes, so it would be (total bytes divided by 1 byte being the fist integer in the index of the array of numbers)

// 	// int *pNumbers = &numbers;

// 	// printf("The memo address of number is %p\n", pNumbers);
// 	printf("The array of numbers is: {");
// 	for(int i = 0; i < array_length; i++){
// 		printf("%d ", numbers[i]);
// 	}
// 	printf("}\n");

// 	return(0);
// }


// Define and Access Struct Members

// typedef struct
// {
// 	char title[20];
// 	char author[20];
// 	float price;

// }Book;

// int main()
// {
// 	Book book1;
// 	Book *pbook1;

// 	pbook1 = &book1;

// 	pbook1 = malloc(sizeof(Book)); // Dynamically allocate memory for the instance of Book 'book1', the same size as it's structure

// 	printf("The size of book1 is %ld\n", sizeof(book1)); // Should be (20 + 20 + 4 = 44 bytes)

// 	return(0);
// }

// int main()
// {
// 	int number = 5;
// 	int* pNumber = &number;

// 	*pNumber = 10;

// 	printf("The location of number in Memory is %p\nAnd the Value is %d\nAnd the size of bytes is %ld\n", pNumber, number, sizeof(*pNumber));

// 	return(0);
// }


