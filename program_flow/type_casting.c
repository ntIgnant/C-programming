# include <stdio.h>
# include <string.h>

/*
1. Type Casting Exercise

Write a program that:

    Accepts two integer values from the user: passed and failed.
    Calculate the total number of students and the passing ratio as a percentage.
    Use both implicit and explicit type casting in your program.
*/

float get_passing_ratio(int passed_stu, int failed_stu)
{
    float passed_students = (float)passed_stu;
    float failed_students = (float)failed_stu;

    int total_students = passed_students + failed_students;

    float passing_ratio = (passed_students / total_students) * 100;

    return(passing_ratio); // value returned as float "percentage of passing students"
}

int main()
{
    int passed, failed;

    printf("-University passing ratio CS-\n");
    printf("Passed: ");
    scanf("%d", &passed);
    printf("Failed: ");
    scanf("%d", &failed);

    float pass_ratio = get_passing_ratio(passed, failed);
    printf("The the passing ratio is %.3f%% out of %d students\n", pass_ratio, passed + failed);
    return(0);
}
