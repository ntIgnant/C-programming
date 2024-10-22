# include <stdio.h>
# include <string.h>


/*
2. Control Flow Exercise: If-Else

Create a program that:

    Takes a number from the user and prints whether it is negative, positive, or zero.
    Extend this by checking if the number is even or odd.
*/

const char* check_number(int value) // 'char*' is a pointer to a cahracter/string in C
{
    int number = value;

    if(number == 0){
        return "zero";
    }
    else if(number < 0){
        return "negative";
    }
    else if(number > 0){
        return "positive";
    }
    else{
        return("Something really werid happend oops");
    }

}

int main()
{
    int user_number;

    printf("Please enter a number: ");
    scanf("%d", &user_number);
    const char* number_type = check_number(user_number);

    if (strcmp(number_type, "zero") == 0){
        printf("%d is zero\n", user_number);
    }
    else if (strcmp(number_type, "negative") == 0){
        printf("%d is negative\n", user_number);
    }
    else if (strcmp(number_type, "positive") == 0)
    {
        printf("%d is positive\n", user_number);
    }
    
    return(0);
}