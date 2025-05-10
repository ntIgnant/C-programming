// TASK: Add required includes

int *read_array(int size) {
  // TASK: Allocate an integer array of sufficient size
  // TASK: Read the integers
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

  // TASK: Free array
}
