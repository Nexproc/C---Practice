#include <stdio.h>
int main () {
  int i, cs[10];
  for(i = 0; i < 10; ++i)
    cs[i] = i;
  printf("digits = ");
  for(i = 0; i < 10; ++i)
    printf("%lu ", sizeof(cs)/sizeof(cs[0]));
  printf("\n");
}
