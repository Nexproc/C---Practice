#include <stdio.h>

void putNumbers(int x, int y);
void swapNumbers(int *x, int *y);

void main() {
  int x, y;
  x = 5;
  y = 0;
  putNumbers(x, y);
  swapNumbers(&x, &y);
  putNumbers(x, y);
}

void putNumbers(int x, int y) {
  printf("x = %d, y = %d \n", x, y);
}

void swapNumbers(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
