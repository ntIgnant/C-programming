#include <stdio.h>

int main() {

  int num1 = 33;
  double num2 = 8;

  // If the type is not specified for a decimal point, assume it is double
  // instead of a float

  printf("Result: %f\n", num1 + num2); // This is correct formating for double

  return 0;
}
