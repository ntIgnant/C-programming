#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int* px = &x;

    printf("Number: %d | Address: %p | Number(pointer*): %d\n", x, px, *px);

    return(0);
}
