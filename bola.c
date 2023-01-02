#include <stdio.h>

int main () {
    double a;

    scanf("%lf", &a);

    printf("VOLUME = %0.3lf\n", ((4.0 / 3.0) * 3.14159) * a * a * a);
    return 0;
}