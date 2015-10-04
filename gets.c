#include <stdio.h>

int main () {

  int c = EOF;
  printf("%c\n", c);
  while (( c = getchar() ) != EOF) {
    printf("%c\n", c);
  }
}
