#include <stdio.h> // to use printf and ther input output stuff

int arGlobal[10]; // initialize global array (INITIALIZED AS 0 AS DEFAULT)

int main(){

    int arLocal[10]; // initialize local array

    for(int i = 0; i < 10; i++){
        printf("%d, ", arLocal[i]);
    }

    return 0;
}
