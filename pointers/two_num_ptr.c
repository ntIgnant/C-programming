#include <stdio.h>

int main(){
    
    int a,b; //Initialize two int variables

    int *pNum = &a; // Assign a pointer to the memory address of a
    *pNum = 10; // Derreference the pointer and assign a value (to curr addrss)

    b = 2 * *pNum; // so b = 2 * '10'

    pNum = &b; // now, the same pointer will be pointing to the memo addrs of b
    
    a = b + *pNum; // This will be a = 20 + 20
    
    printf("Value of a:%d stored at %p\n", a, &a);
    printf("Value of b:%d stored at %p\n", *pNum, pNum); //or b, &b in this case


    return 0;
}
