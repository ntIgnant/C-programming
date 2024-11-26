#include <stdio.h>
#include <stdlib.h>

struct Data
{
	int size;
	int *memo_size;
};

int main()
{
	struct Data data1;
	struct Data data2

	data1.size = 10;
	data1.memo_size = malloc(10 * sizeof(int)); // Dinamically allocate memmory for 10 integers (10 * 4bytes = 40 bytes)

	data2. size = 2;
	data2.memo_size = malloc(2 * sizeof(int));

	printf("Data1 is %d, has %d bytes in memory, location: %p\n", data1.size, *data1.memo_size, &data1.memo_size);

	return(0);
}