#include<stdio.h>
#include <string.h>


// strcmp stands for 'string compare'

int main()
{
	char name1[] = "ntIgnant";
	char name2[] = "Oscar";


	// strcmp returns a value (0, greater than 0, or less than 0)
	if(strcmp(name1, name2) == 0){
		printf("Name1 and Name2 are EQUAL!\n");
	}
	else{
		printf("Name1 and Name2 are not EQUAL\n");
	}

	return(0);
}