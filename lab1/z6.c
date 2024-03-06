#include <stdio.h>
#include <string.h>

int main(){
  printf("Podaj ciag znakow: ");
  char wyraz[100];
  scanf("%s", &wyraz);
  printf("Podaj skok: ");
  int k = 0;
  scanf("%d", &k);
  int dlugosc = strlen(wyraz);
  char zaszyfrowany[dlugosc];
  for(int i = 0; i < dlugosc; i++){

    if (( 97 <= (int) wyraz[i] && (int) wyraz[i] <= 122))
        wyraz[i] = (((int) wyraz[i] + k%26 <= 122) ? (char) ((int) wyraz[i] + k%26) : (char) (96 + (int) wyraz[i]+k%26 - 122 ));
    else if (65 <= (int) wyraz[i] && (int) wyraz[i] <= 90){
            wyraz[i] = (((int) wyraz[i] + k%26 <= 90) ? (char) ((int) wyraz[i] + k%26) : (char) (64 + (int) wyraz[i]+k%26 - 90 ));

    }
  }
  printf("%s", wyraz);
  return 0;
}