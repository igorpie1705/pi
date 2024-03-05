#include <stdio.h>

int main(){
  printf("Podaj n: ");
  int n = 0;
  scanf("%d", &n);
  int a = 0;
  int b = 1;
  printf("%d ", a);
  while (a * b <= n){
    if (n == a * b){
      printf("%d\nTAK", b);
      return 0;
    }
    printf("%d ", b);
    int temp = b;
    b = a + b;
    a = temp;
  }
  printf("%d\nNIE", b);

  return 0;
}