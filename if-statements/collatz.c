#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Collatz(int number){

    printf("Current NUmber: %d\n", number); // Print the number at the beining of the process always

    if(number == 1){
        // printf("%d\n", number);
        exit(1); // Terminate the program
    }
    else{
        if(number % 2 == 0){ // meaning that the number is even
            number = number / 2;
            Collatz(number); // Recursion to call to itself
        }
        else{ // Meaning that the number is odd
            number = (number * 3) + 1; // just do 3n +1
            Collatz(number);
        }
    }
}

int main(){
    
    int user_num;

    while(true){
        printf("Please Enter a Nnumber: ");
        if(scanf("%d", &user_num) == 1){ // Meaning that the input matches the formating, so an int was prompted
            
            // If the number is negative, convert it to possitive multiplying it by -1
            if(user_num < 0){
                user_num * -1; // oke
                break;
            }
            
            // If the input was possitive, all good
            break;
        }
        else{
            printf("Invalid input, numbers only!\n");
            while(getchar() != '\n');
        }
    }

    // Now, put the obtained input number into the function to get the collatz shit
    Collatz(user_num);

    return 0;
}
