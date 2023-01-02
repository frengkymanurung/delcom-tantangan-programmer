#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    double z;

    switch (x)
    {
    case 1:
        z = 4;
        break;

    case 2:
        z = 4.5;
        break;

    case 3:
        z = 5;
        break;

    case 4:
        z = 2;
        break;

    case 5:
        z = 1.5;
        break;
    }

    printf("Total Harga: Rp%0.2lf\n", z * y);

    return 0;
}