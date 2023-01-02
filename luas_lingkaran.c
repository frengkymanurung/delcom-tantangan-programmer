#include <stdio.h>

int main () {
    double r;

    scanf("%lf", &r);

    printf("L = %0.4lf\n", (3.14159 * r) * r);

    return 0;
}