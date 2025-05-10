#include <stdio.h>
#include <stdbool.h>

bool is_equal(int array_one[], int one_size, int array_two[], int two_size) {
  // TASK: Implement the equality check here
}


// Do not modify below
int main() {
  int a[] = {1, 2, 3, 4};
  int b[] = {2, 1, 3};
  int c[] = {1, 2, 3};
  int d[] = {2, 1, 3};

  printf("a (4) = b (3): %d (expected 0)\n", is_equal(a, 4, b, 3));
  printf("a (4) = c (3): %d (expected 0)\n", is_equal(a, 4, c, 3));
  printf("a (3) = c (3): %d (expected 1)\n", is_equal(a, 3, c, 3));
  printf("a (1) = c (1): %d (expected 1)\n", is_equal(a, 1, c, 1));
  printf("b (3) = c (3): %d (expected 0)\n", is_equal(b, 3, c, 3));
  printf("b (3) = d (3): %d (expected 1)\n", is_equal(b, 3, d, 3));
  printf("c (2) = d (2): %d (expected 0)\n", is_equal(c, 2, d, 2));
  printf("c (3) = c (2): %d (expected 0)\n", is_equal(c, 3, c, 2));
  printf("d (3) = d (3): %d (expected 1)\n", is_equal(d, 3, d, 3));
  printf("d (0) = d (0): %d (expected 1)\n", is_equal(d, 0, d, 0));
}
