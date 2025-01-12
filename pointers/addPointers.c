#include <stdio.h>
#include <stdlib.h>

/*
 Please implement a function addPointers, that takes two pointers to integer (int*), and returns the sum of both.
 */

int addPointers(int* p1, int* p2){
    pSum = (p1*) + (p2*);
    return(pSum);
}

int main(){
    int num1 = 11;
    int num2 = 33;

    int* pNum1 = &num1;
    int* pNum2 = &num2;

    int result = addPointers(pNum1, pNum2);

    printf("The sum of %d + %d = %d\n", pNum*, pNum2*, result);
    return(0);
}
