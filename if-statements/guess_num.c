#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h> // to generate the seed
#include <stdbool.h> // header file to use boolean variables


int main(){
    
    int array_num[10]; // Initialize array with 10 ints

    int ar_len = sizeof(array_num) / sizeof(array_num[0]); // Get the length of the array

    // Fill the array
    for(int j = 0; j < ar_len; j++){
        array_num[j] = j;
    }

    /*
    // Print the values of the array (DEBUGG)
    printf("Array Of Numbers {");
    for(int i = 0; i < ar_len; i++){
        printf("%d ", array_num[i]);
    }
    printf("}\n");
    */

    // Get a random number from the array number
    srand(time(NULL)); // Generate a seed (to not repeat the random number)

    int ran_num = rand() % ar_len; // Actual random number from the number array

    int user_num; // The user number will be stored in this variable

    while(true){
        printf("Please enter a Number from 0 - 9: ");
        if(scanf("%d", &user_num) == 1 && user_num >= 0 && user_num <= 9){
            break; // If this happends, it means that the input read an int, so all fine
        }
        else if(user_num == NULL){
            printf("Input Not Accepted, try again\n");
            while(getchar() != '\n'); // Clearn the input buffer
        }
        else{
            printf("Try again, only numbers are accepted\n");

            // Clearn the input buffer
            while(getchar() != '\n');
        }

    }
    printf("User Number: %d\nRandom Number: %d\n", user_num, ran_num); // DEBUGG
    

    return 0;
}
