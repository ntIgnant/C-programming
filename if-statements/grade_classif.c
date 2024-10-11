#include <stdio.h>

/*
5. Grade Classification

Write a program that takes a student's score (0-100) as input and assigns a grade:

    90-100: A
    80-89: B
    70-79: C
    60-69: D
    Below 60: F
*/

int main()
{
    int sub_num, i, current_grade;
    int tot_grade = 0;

    printf("How many subjects do you have: ");
    scanf("%d", &sub_num);


    for(i = 1; i <= sub_num; i++) {
        printf("Please enter your grade (0 - 100): ");
        scanf("%d", &current_grade);


        while(current_grade < 0 || current_grade > 100) {
            printf("Invalid grade! Please enter a valid grade (0 - 100): ");
            scanf("%d", &current_grade);
        }


        tot_grade += current_grade;
    }


    int final_grade = tot_grade / sub_num;


    if(final_grade >= 90 && final_grade <= 100) {
        printf("Grade A for %d\n", final_grade);
    }
    else if(final_grade >= 80 && final_grade <= 89) {
        printf("Grade B for %d\n", final_grade);
    }
    else if(final_grade >= 70 && final_grade <= 79) {
        printf("Grade C for %d\n", final_grade);
    }
    else if(final_grade >= 60 && final_grade <= 69) {
        printf("Grade D for %d\n", final_grade);
    }
    else if(final_grade < 60) {
        printf("Grade F for %d\n", final_grade);
    }
    else {
        printf("Something went wrong\n");
    }

    return 0;
}
