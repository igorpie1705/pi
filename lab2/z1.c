#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void rand_permutation(int n, int *a){
  for(int i = 0; i < n; i++)
    a[i] = i;
  for(int i = 0; i < n - 1; i++){
    int k = (rand() % (i - n)) +  i;
    int temp = a[i];
    a[i] = a[k];
    a[k] = temp;
    }
}


void rand_from_interval(){
  printf("Podaj poczatek przedzialu: ");
  int a = 0;
  scanf("%d", &a);
  printf("Podaj koniec przedzialu: ");
  int b = 0;
  scanf("%d", &b);
  printf("Podaj ilosc wygenerowanych liczb: ");
  int m = 0;
  scanf("%d", &m);
  for(int i=0; i < m; i++){
    int x = (rand() % (b - a + 1)) + a;
    printf("%d ", x);
  } 
}

void bubble_sort(int n, int tab[]){
  bool swapped;
  int cnt = 0;
  for(int i = 0; i < n - 1; i++){
    swapped = false;
    for(int j = 0; j < n - i - 1; j++){
      if(tab[j] > tab[j + 1]){
        int temp = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = temp;
        swapped = true;
      }
      if(swapped == true)
        cnt++;
    }
  }
  printf("Wynik: %d\n", cnt);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
  srand(time(NULL));
  printf("Podaj ilosc elementow w permutacji: ");
  int n = 0;
  scanf("%d", &n);
  int tab[n];
  rand_permutation(n, tab);
  printArray(tab, n);
  bubble_sort(n, tab);
  printArray(tab, n);


  return 0;
}