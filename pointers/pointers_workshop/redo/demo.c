#include <stdio.h>
#include <stdlib.h> // For sizeof()

int main(){
    
    char word[] = "Hola"; // 'Hola' should be null terminated, so {H, o, l, a, \0}
                          // So sizeof(word) should be word length + 1 (\0)

    printf("The memory size of %s is %ld\n", word, sizeof(word)); // sizeof() returns a long '%ld'

    return 0;
}
