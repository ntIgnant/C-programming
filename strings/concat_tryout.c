#include <stdio.h>

int main(){

    // This should result in an error
    char ch1 = 'a';
    char ch2 = 'b';

    char conc[3] = ch1 + ch2;


    printf("The string %s is not valid\n", conc);

    return 0;
}

