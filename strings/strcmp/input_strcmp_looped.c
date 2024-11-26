# include <stdio.h>
# include <string.h>
# include <stdbool.h>


int main()
{
	char user_pssw[30];
	char real_pssw[] = "Patricio1234";

	do{
		printf("Please enter the password: ");
		scanf("%s", user_pssw);

		if(strcmp(user_pssw, real_pssw) != 0){ // Meaning that the string comparition is false, here it returns 1 for some reason
			printf("Your password is incorrect, please try again\n");
		}

		else{
			printf("Your password is correct!\n");
			break;
		}

	}while(true);

	return(0);
}