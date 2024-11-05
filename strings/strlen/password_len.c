# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int main()
{
	char user_password[30];
	int psswd_len; // The length of the user password


	do{
		printf("Please enter a password (10 characters minimum): ");
		scanf("%s", user_password);

		psswd_len = strlen(user_password); // Value of the length of the password entered by the user

		if(psswd_len < 10){
			printf("Insuficient number of characters\n");
		}

		else{
			printf("Valid password!\n");
			break;
		}
	}while(true);

	return(0);
}