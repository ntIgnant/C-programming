#include <stdio.h>

int factorial(int num){
    if(num == 0){
        return(1); // terminate the function | THIS IS THE BASE CASE (constant time)
    }
    else{
        return(num * factorial(num - 1)); // THIS IS THE RECURSIVE CASE | T(f(n1)) + ... + T(f(nk))
    }
        
}

int main(){
    int my_num = 5;

    printf("-Factorial of %d-\n", my_num);

    printf("%d\n", factorial(my_num));



    return(0);
}
