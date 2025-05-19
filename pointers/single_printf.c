#include <stdio.h>

int main(){
    // Make the (bigger than) assignation using only one printf statement

    int num1, num2; // Initialize the values

    // Manage everything with pointers
    int *pNum1 = &num1; // Assing the pointers as the memory addresses of the int variables num1 num2
    int *pNum2 = &num2;

    printf("Please enter two numbers: ");
    scanf("%d %d", pNum1, pNum2); // here it works the same as saying &a &b bc those are their addresses

    if(*pNum1 < *pNum2){
        // Variable switch
        int temp; // Temporary variable to make the switch

        temp = *pNum1; // hold the value of pNum1 in temp
        *pNum1 = *pNum2; // assign the value of pNum2 as pNum1
        *pNum2 = temp; // assing the the value of pNum1 (now temp) to pNum2
    }

    printf("%d > %d\n", *pNum1, *pNum2);

    return 0;
}
