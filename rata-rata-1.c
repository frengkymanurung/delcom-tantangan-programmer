#include <stdio.h>

int main () {
    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);

    printf("Rata-rata = %0.5f\n", ((A * 3.5) + (B * 7.5)) / 11);

    return 0;
}