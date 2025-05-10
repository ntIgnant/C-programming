#include <stdio.h>
#include <string.h> // Header file to get string uitilities (e.g strlen)

void reverse_string(char str[]) {
  // TASK: Implement this function

    // Get the length of the string
    int length = strlen(str);
    
    // To revverse a string, two indicies (or pointers) are commonly used
    int i = 0; // Index of the first element
    int j = length - 1; // Index of the last element

    // j = len - 1 because the the array of characters (string) is actually like
    // hello[] = {h, e, l, l, o, \0}, it finishes in null character, bc it's a string
    
    while(i < j){

        //store the character of index i as a temp_character to swap it
        char tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;

        i++;
        j--;
    }

}

int main() {
  char hello[] = "hello";
  reverse_string(hello);
  printf("hello reversed is %s\n", hello);
  reverse_string(hello);
  printf("hello is %s\n", hello);

  char bye[] = "bye";
  reverse_string(bye);
  printf("bye reversed is %s\n", bye);
  reverse_string(bye);
  printf("bye is %s\n", bye);
}
