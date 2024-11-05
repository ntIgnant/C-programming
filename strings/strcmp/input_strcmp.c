# include <stdio.h>
# include <string.h>


int main()
{
	char user_pssw[30];
	char real_pssw[] = "Patricio1234";

	printf("Please enter the password: ");
	scanf("%s", user_pssw);

	if(strcmp(user_pssw, real_pssw) == 0){
		printf("Your password is correct!\n");
	}

	else{
		printf("Incorrect password, try again\n");
	}

	return(0);
}