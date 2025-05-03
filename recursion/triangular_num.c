#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h> // For boolean variables

// Function to get the triangular number with recursion

int TriangularNumber(int num, int base_index, int cur_sum){
    // The triangular Number is the sum of all numbers from 1 to n
    if(base_index > num){
        return(cur_sum);
    }
    else{
        cur_sum = base_index + cur_sum;
        TriangularNumber(num, base_index + 1, cur_sum); // Recrusively call the function
    }
}


int main(){

    int user_num;

    while(true){

        printf("Please enter a number: ");
        if(scanf("%d", &user_num) == 1){
            // OK PASS
            break;
        }
        else{
            printf("Numbers only!\n");
            while(getchar() != '\n'); // Clear the input buffer
        }
    }

    // printf("Input Number: %d\n", user_num); //DEBUGG

    int i = 1;
    int suma = 0;

    int triangular_result = TriangularNumber(user_num, i, suma);

    printf("The Triangular Number of %d is %d\n", user_num, triangular_result);

    return 0;
}
