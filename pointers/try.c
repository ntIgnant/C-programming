#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int* px = &x;

    printf("Number: %d | Address: %p\n", x, px);

    return(0);
}
