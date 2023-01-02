#include <stdio.h>

int main()
{
    int a, b;
    float c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);

    printf("NOMOR = %d\n", a);
    printf("GAJI = Rp %0.2f\n", b * c);

    return 0;
}