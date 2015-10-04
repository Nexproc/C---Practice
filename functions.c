#include <stdio.h>

int printStuff(int arr[], int size);

int main(){
  int size = 20;
  int cs[size];
  char wednesday[] = "wednesday\n";
  for(int i = 0; i < size; ++i)
    cs[size - i - 1] = i;
  printf("digits = ");
  printStuff(cs, size);
  printf("\n");
  printf(wednesday);
}

int printStuff(int arr[], int size){
  for(int i = 0; i < size; ++i)
    printf("%d ", arr[i]);
  return 0;
}
