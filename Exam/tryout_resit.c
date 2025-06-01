#include <stdio.h>
#include <stdlib.h>

int main(){

    // Fundamentally, characters have ascii values
    // An the ascii value of a char (decimal) is the same as the number itself 
    char char1 = '2';
    char char2 = '0';

    char result = char1 = char2;

    printf("%d\n", result);

    return 0;
}
