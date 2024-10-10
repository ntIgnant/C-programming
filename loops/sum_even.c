# include <stdio.h>

/*
Sum of Even and Odd Numbers

    Objective: Write a program that calculates the sum of all even and odd numbers separately from 1 to n using a while loop.
    Input: An integer n.
    Output: Two values: the sum of even numbers and the sum of odd numbers.
*/

int even_sum(int x)
{
    int i, sum;
    i = 1;
    // for(initialization; condition; inc/decrement)
    while (i <= x){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }

    return(sum);
}

int odd_sum(int y)
{
    int j, sum;
    j = 1;
    // for(initialization; condition; inc/decrement)
    while (j <= y){
        if(j % 2 != 0){
            sum += j;
        }
        j++;
    }

    return(sum);
}

int main()
{
    int user_num;

    printf("Please enter a number here: ");
    scanf("%d", &user_num);

    int ev_sum = even_sum(user_num);
    int od_sum = odd_sum(user_num);

    printf("There are the sums from 1 to %d\n", user_num);
    printf("|Even| = %d\n|Odd| = %d\n", ev_sum, od_sum);

    return(0);
}