# include <stdio.h>

int in_range(int number)
{
    if(number >= 0 && number <= 100){
        return(1); // It's in range
    }
    else{
        return(0); // It's not in range
    }
}

int main()
{
    int user_num;

    printf("Please enter a number (1 - 100): ");
    scanf("%d", &user_num);

    if(in_range(user_num)){
        printf("%d is in range!\n", user_num);
        return(0);
    }
    else{
        printf("%d is NOT in range\n", user_num);
        return(0);
    }

}