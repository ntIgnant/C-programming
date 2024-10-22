# include <stdio.h>
# include <string.h>
# include <stdbool.h>

/*
3. Boolean Expressions and Logical Operators

Write a program that:

    Asks the user for two numbers and performs the following checks:
        Are both numbers greater than 10?
        Is at least one number even?
        Check if the sum of the numbers is between 20 and 50, inclusive.
*/


bool greater_than_ten(int fst_num, int sec_num)
{
    if (fst_num > 10 && sec_num > 10){
        return(true);
    }
    else{
        return(false);
    }
}

bool any_is_even(int fst_num, int sec_num)
{
    if (fst_num % 2 == 0 || sec_num % 2 == 0){
        return(true);
    }
    else{
        return(false);
    };
}

bool sum_in_range(int fst_num, int sec_num)
{
    int total_sum = fst_num + sec_num;
    if (total_sum >= 20 && total_sum <= 50){
        return(true);
    }
    else{
        return(false);
    }
}

int main()
{
    int num1, num2;
    int paramteter_checker = 0; // if this checker is = 3, it means that every parameter is true (+1, +1, +1)

    printf("The following paramenters are goint go be checked: \n\n");
    printf("- Are both numbers greater than 10?\n- Is at least one number even?\n- The sum of the numbers is between 20 and 50?\n\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    bool first_condition = greater_than_ten(num1, num2);
    if (first_condition == true){
        paramteter_checker += 1;

        bool sec_condition = any_is_even(num1, num2);
        if (sec_condition == true){
            paramteter_checker += 1;

            //call the last check/function
            bool third_condition = sum_in_range(num1, num2);
            if (third_condition == true){
                paramteter_checker += 1;
            }
        }
    }

    if(paramteter_checker == 3){
        printf("All the statements are TRUE!\n");
    }
    else
    {
        printf("Not all the statements are true :C\n");
    }
    

    return(0);
}