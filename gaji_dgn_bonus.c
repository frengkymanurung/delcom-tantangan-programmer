#include <stdio.h>

int main () {
    char nama[50];
    double a,b;

    scanf("%[^\n]%*c", nama);
    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("TOTAL = Rp %0.2lf\n", ((15 * b) / 100) + a);

    return 0;
}