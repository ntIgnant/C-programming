#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_ar[3]; // Initialize a number array for 3 ints
                   // sizeof(num_ar) -> 3 * 4bytes = 12 bytes of memo

    // Try to access ouside the memory bounderies (part of memory which is not allowed for the assignation)

    num_ar[4] = 3;
    printf("%d %d ???\n", num_ar[4], num_ar[6]); // index 4 and 6 shouldn't be allowed to acces in the assigned array
                                            // Err: Segmentation Fault (core dumped)

    return 0;
}
