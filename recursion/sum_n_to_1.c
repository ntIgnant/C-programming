#include <stdio.h>

void Sum_n_to_1(int num){
    if(num == 0){
        return;
    }
    else{
        printf("num %d\n", num);
        
        // Recursion after logic
        Sum_n_to_1(num - 1); // -1 to the initial number
    }
    
}

int main(){
    
    int my_number = 10;
    Sum_n_to_1(my_number);

    return(0);
}
