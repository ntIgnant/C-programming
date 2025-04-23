#include <stdio.h>

void Countdown(int num){
    if(num == 0){
        return;
    }
    else{
        printf("loop %d\n", num);
        Countdown(num - 1); // Call itself but with the number - 1 (3 -> 2)
    }
}

int main(){
    
    int my_number = 4;
    Countdown(my_number);

    return(0);
}
