// TASK: Add required includes
#include <stdio.h>
#include <stdlib.h>


int *read_array(int size) {
  // TASK: Read the integers
  int *array = malloc(size * sizeof(int)); // Allocate memory for the integer array of the input size (input size * sizeof(int))
  
  const int max_val = size;
  
  for(int i = 0; i < max_val; i++){
    printf("Enter your #%d value: ");
    scanf("%d", &array[i]);
  }

  printf("\nYour values are: ");

  for(int j = 0; j < max_val; j++){
    printf("%d ", array[j]);
  }

  printf("\n");
}

double compute_average(int *array, int size) {
  // TASK: Compute the average
}

int main() {
  int size;
  printf("Enter number of values: ");
  scanf("%d", &size);
  int *array = read_array(size);
  double avg = compute_average(array, size);
  printf("Average: %lf", avg);

  //TASK: Free array
}
