#include <stdio.h>

void Countdown(int num){
    if(num == 0){
        return;
    }
    else{
        Countdown(num - 1); // Call itself but with the number - 1 (3 -> 2)
    
        //Print statement after recursion (logic after recursion)
        printf("loop %d\n", num);
    }
}

int main(){
    
    int my_number = 4;
    Countdown(my_number);

    return(0);
}
