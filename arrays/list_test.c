# include <stdio.h>
# include <string.h>
# include <stdbool.h>


int main()
{
	float heights[5] = {1.40, 1.50, 1.60, 1.70, 1.80};
	char names[5][30] = {"Ignacio", "Oscar", "Rene", "Sarah", "Sophie"}; // The first brackets specify the number of items, and the second one specifies the buffer size for each name

	char user_name[30];

	printf("Please enter one of the following names: \n");
	printf("Ignacio, Oscar, Rene, Sarah, Sophie\n");
	printf("Name: ");
	scanf("%29s", user_name); // Limit the input value to avoid overflow

	bool found = false; // Variable to indicate the state of 'found' in the list of names

	for(int i = 0; i < 5; i++){ // For loop that goes for all the values of the list of names
		if(strcmp(user_name, names[i]) == 0){
			found = true;
			break;
		}
	}

	if(found == true){
		printf("%s is in the list!\n", user_name);

		if(strcmp(user_name, "Ignacio") == 0){ // If the name entered by the user is "Ignacio"
			printf("%s height is %.2fm\n", user_name, heights[3]);
		}

		else if(strcmp(user_name, "Oscar") == 0){
			printf("%s height is %.2fm\n", user_name, heights[2]);
		}

		else if(strcmp(user_name, "Rene") == 0){
			printf("%s height is %.2fm\n", user_name, heights[4]);
		}

		else if(strcmp(user_name, "Sarah") == 0){
			printf("%s height is %.2fm\n", user_name, heights[1]);
		}

		else if(strcmp(user_name, "Sophie") == 0){
			printf("%s height is %.2fm\n", user_name, heights[0]);
		}

		else{
			printf("Oops, something went terribly wrong :p\n");
		}
	}

	else if(found == false){
		printf("Sorry, %s is not in the list\n", user_name);
	}

	return(0);
}