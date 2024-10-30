# include <stdio.h>
# include <string.h> // For the strcpy...


struct Bank {
	char name[30];
	char passw[30]; // For the user to have an acc password
	int balance;

}; // ';' To end the structure

int main()
{
	struct Bank acc1; // Create a variable 'instance' of Bank

	char input_name[30]; // To get the verification name from the user
	char input_passw[30]; // To get the verification password from the user

	// Set the values of account 1
	strcpy(acc1.name, "ntIgnant"); // Name for acc1
	strcpy(acc1.passw, "Patricio1234"); // Password for acc1
	acc1.balance = 17345; // bro rich


	// Start account verification 'log-in screen type shit'
	printf("Account Name: ");
	do{
		scanf("%s", input_name);
		if(strcmp(acc1.name, input_name) != 0){ // If the input name is not 'ntIgnant'
			printf("Incorrect Account Name, try again: "); // Then the user needs to attempt again
		}
	}
	while(strcmp(acc1.name, input_name) != 0);

	printf("Account Password: ");
	do{
		scanf("%s", input_passw);
		if(strcmp(acc1.passw, input_passw) != 0){ // If the input password is not 'Patricio1234'
			printf("Incorrect Password, please try again: "); // Then the user needs to attempt again
		}
	}
	while(strcmp(acc1.passw, input_passw) != 0);

	printf("\n-Account Information-\n\n");
	printf("Name: %s\nBalance: $%d\n", acc1.name, acc1.balance);

	return(0);
}