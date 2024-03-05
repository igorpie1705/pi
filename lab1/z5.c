#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
  srand(time(NULL));
  int X = rand() % 101;
  int g = 100;
  int d = 0;
  int n = 0;
  int i = 0;
  while (n != X){
    n = (rand() % (g - d + 1)) + d;
    printf("iteracja: %d n: %d\n", i, n);
    if (n == X){
      printf("X = %d", n);
      return 0;
    }
    i++;
  }

  return 0;
}