#include <stdio.h>
#include <math.h>

int pierwsza(int n){
  if (n < 2)
    return 0;
  else if (n == 2)
    return 1;
  int i = 2;
  int N = ceil(sqrt(n));
  while (i <= N){
    if (n % i == 0)
      return 0;
    i++;
  }
  return 1;
}

int niemalejacy(int n){
  int ost = 0;
  int przedost = 0;
  do{
    ost = n % 10;
    n /= 10;
    przedost = n % 10;
  }
  while (n != 0 && ost >= przedost);
  if (n == 0)
    return 1;
  else
    return 0;
}

int main(){
  int N = 1000;
  int i = 0;
  while (i <= N){  
    if (pierwsza(i) == 1)
      if (niemalejacy(i) == 1)
        printf("%d ", i);
    i++;
  }
  return 0;
}