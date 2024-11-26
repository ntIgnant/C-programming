# include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
	char names[6][20] = {"ignacio", "oscar", "hassan", "rene", "allyzon", "nikto"}; // The buffer size fo each name and the number of values of the array needs to be specified for the compliler
	char user_names[6][20] = {"martin", "felipe", "hassan", "rene", "allyzon", "nikto"};

	int user_index;

	do{
		printf("Type a number from 0 to 5: ");
		scanf("%d", &user_index);

		if(user_index < 0 || user_index > 5){
			printf("Invalid number, please try again\n");
		}

		else{
			break;
		}
		
	}while(true);


	if(strcmp(names[user_index], user_names[user_index]) != 0){
		printf("The index %d of both arrays does't match (%s - %s)\n", user_index, names[user_index], user_names[user_index]);
	}
	else{
		printf("The index %d of both arrays MATCH! (%s - %s)\n", user_index, names[user_index], user_names[user_index]);
	}


	return(0);
}