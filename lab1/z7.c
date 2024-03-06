#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

float float_rand( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}
bool gen_point(float a, float b) {
    float x = float_rand(a, b);
    float y = float_rand(0, 1);
    if (y <= sin(x)) {
        return true;
    }
    return false;
}


int main(void) {
    int tries, correct = 0;
    float a, b = 0;
    srand(time(NULL));
    printf("Enter lower limit: ");
    scanf("%f", &a);
    printf("Enter upper limit: ");
    scanf("%f", &b);
    printf("How many tries: ");
    scanf("%d", &tries);
    for (int i=0;i<tries;i++) {
        if (gen_point(a, b)) {
            correct++;
        }
    }
    printf ("%f",((float) correct)/tries*(b-a));
    return 0;
}