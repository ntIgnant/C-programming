# include <stdio.h>

int main()
{
	int j = 0; // Counter
	int i = 4; // Number of inputs

	int user_num;
	int total_num = 0;

	while(j < i){
		printf("Enter a number: ");
		scanf("%d", &user_num);

		total_num += user_num;
		j++;
	}

	printf("THe total sum of numbers is %d\n", total_num);

	return(0);
}