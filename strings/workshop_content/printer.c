#include <stdio.h>

void print_int_array(int array[], int size) {
  // TASK: Implement this function

    printf("[");
    for(int i = 0; i < size; i++){
        printf("%d, ", array[i]); // Printh the current index of the array (traverse the whole array)
    }
    printf("]");
}

int main() {
  int a[] = {1, 2, 3, 4};
  int b[] = {1, -1, 1};
  int c[] = {3, 1, -1};
  int empty[] = {};

  printf("Printing a: ");
  print_int_array(a, 4);
  printf("\n");
  printf("Printing b: ");
  print_int_array(b, 2);
  printf("\n");
  printf("Printing c: ");
  print_int_array(c, 3);
  printf("\n");
  printf("Printing empty: ");
  print_int_array(empty, 0);
  printf("\n");
}
