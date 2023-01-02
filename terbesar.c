#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("%d yang terbesar\n", x);
    }

    else if (y > x && y > z)
    {
        printf("%d yang terbesar\n", y);
    }

    else
    {
        printf("%d yang terbesar\n", z);
    }

    return 0;
}