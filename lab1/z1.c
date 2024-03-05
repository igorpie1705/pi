#include <stdio.h>

int main(){
	printf("Wczytaj liczbe calkowita N: ");
	int N = 0;
	scanf("%d", &N);
	printf("N = %d \n", N);
	int i = 1;
	float n = 1;
	while (i <= N){
		 n = (float) n * i;
		i++;
	}
	printf("N! = %.1f", n);

	return 0;
}
