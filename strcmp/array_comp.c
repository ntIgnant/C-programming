#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define AR_BUFF 4 // Macro to define the array buffer size


void Print_Array(char arr[], int array_len){
    printf("{");
    for(int p = 0; p < array_len; p++){
        printf("%c ", arr[p]);
    }
    printf("}\n");
}

int main(){
    
    char arr1[] = {'a', 'b', 'c', 'e'};
    char arr2[AR_BUFF]; // Array 

    char tmp_char;
    int counter = 0;
    int tmp_index = 0;

    while(counter < AR_BUFF){
        printf("Enter a character: ");

        if(scanf("%c", &tmp_char) != 1){ // Meaning if the prompetd imput doesnt match the format specifier
            printf("Invalid\n");
            while(getchar() != '\n'); // Clear the input buffer
            continue;
        }
        else{
            printf("%d characters missing!\n", AR_BUFF - counter - 1);
            arr2[tmp_index] = tmp_char;

            while(getchar() != '\n'); // Clear the buffer
            counter += 1; // Add one valid attempt to the counter
            tmp_index += 1;
        }
    }

    // For this point, we shuld have anther array with 4 characters
    // Now, compare both array character to check if they are equal
    
    int ar_len = sizeof(arr2) / sizeof(arr2[0]); // Length of the array

    // Print_Array(arr2, ar_len); // DEBUGG

    int matches; // If this number is equal to the array length, that means that the strings are equal

    for(int i = 0; i < ar_len; i++){
        if(arr1[i] == arr2[i]){
            matches += 1; // Add 1 to the matches found
        }
    }

    printf("Matches: %d | Arr Len: %d\n", matches, ar_len);

    if(matches == ar_len){
      printf("--Arrays--\n");
      Print_Array(arr1, ar_len);
      Print_Array(arr2, ar_len);
    }
  
   
    return 0;
}
