#include <stdio.h>
 

int main(){

    int a,b; // Initiaize two variables
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b); // Scanf(valA valB, addrsA, addrsB)

    // I'll manage all with pointers just for """fun"""
    int *pNuma = &a; // pointer pointing to the address of 'a'
    int *pNumb = &b; // pointer pointing to the address of 'b'

    if(*pNuma > *pNumb){
        printf("%d %d\n", *pNuma, *pNumb);
    }
    else{
        printf("%d %d\n", *pNumb, *pNuma);
    }
    
 
    return 0;
}
