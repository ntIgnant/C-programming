#include <stdio.h>

int SUM_NUMS(int Ar[], int i, int n){
    if(i == n){
        return(1); // Terminate the function (recursion)
    }
    else{
        if(Ar[i] % 2 == 0){ // Meaning that the current array value is even
            return SUM_NUMS(Ar, i + 1, n) + Ar[i]; // +Ar[i] if the number is even
        }
        else{
            // Case where the number is odd
            return SUM_NUMS(Ar, i + 1, n) - Ar[i]; // -Ar[i] if thhe number is odd
        }
    }
}


int main(){
    
    // Values:
    int array[] = {1, 2, 3, 4, 5};
    int indx = 0; // Starts at 0 index
    int ar_len = sizeof(array) / sizeof(array[0]);


    int total_array_sum = SUM_NUMS(array, indx, ar_len);

    printf("Total Sum of The Array Numbers: %d\n", total_array_sum);
    return(0);
}
