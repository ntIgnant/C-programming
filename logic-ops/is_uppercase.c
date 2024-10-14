# include <stdio.h>

int iscaps(int ch)
{
    if(ch >= 'A' && ch <= 'Z'){ // AND operator (&&)
        return(1); // Return 1 if is uppercase
    }
    else{
        return(0); // Return 0 if is lowercase
    }
}

int main()
{
    char user_char;

    do
    {
        printf("Please enter an uppercase or lowercase character (q for exit): ");
        scanf("%c", &user_char);
        if(iscaps(user_char)){
            printf("%c is uppercase\n", user_char);
        }
        else{
            printf("%c is lowercase\n", user_char);
        }
    } while (user_char != 'q');
    printf("bye\n");
    return(0);
    

}
