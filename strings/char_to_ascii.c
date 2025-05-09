#include <stdio.h>
#include <stdlib.h>


int main(){

    int user_opt;
    char user_char;
    int user_ascii; // Should be in range 0 | 127

    while(user_opt < 0 || user_opt > 1){
        printf("Please enter one of the following (index)\n[0] Char -> ASCII\n[1] ASCII -> Char\n");
        scanf("%d", &user_opt); // Get menu opt
        
        if(user_opt == 1){
            printf("Please enter a character (single char): ");
            scanf("%c", &user_char); // Get char from the user
            
            printf("Character '%c' is '%d' ASCII\n", user_char, user_char);
            break;
        }
        else if(user_opt == 0){
            printf("Please enter a value (from 0 - 127): ");
            scanf("%d", user_ascii); // Get the ascii val

            printf("The ASCII '%d' is the hcaracter '%c'\n", user_ascii, user_ascii);
            break;
        }
        else{
            printf("Logic error if this happens\n");
            exit(1); // Exit with error code (1)
        }
    }

    return 0;
}
