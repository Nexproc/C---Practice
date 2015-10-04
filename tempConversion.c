#include <stdio.h>


int main () {
  int fahr/*, celsius*/;
  // int lower, upper, step;
  // lower = 0;
  // upper = 300;
  // step = 20;

  // fahr = lower;
  printf(" F     C\n");
  printf("---  -----\n");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
      printf("%3d %6.1f\n", fahr, 5 * (fahr - 32.0) / 9);
  }
  // while (fahr < upper) {
  //   celsius = 5 * (fahr - 32.0) / 9;
  //   fahr = fahr + step;
  //   printf("%3.0f %6.1f\n", fahr, celsius);
  // }
}
