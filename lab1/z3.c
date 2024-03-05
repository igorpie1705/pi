#include <stdio.h>

int doskonala(int n){
  int i = 1;
  int suma = 0;
  while(i < n){
    if(n % i == 0){
      suma += i;
      i++;
    }
    else{
      i++;
    }
  }
  if (suma == n){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  printf("zadaj przedzial koncowy: ");
  int N = 0;
  scanf("%d", &N);
int i = 1;
while(i <= N){
  if (doskonala(i) == 1){
    printf("%d ", i);
  }
  i++;
}
  return 0;
}