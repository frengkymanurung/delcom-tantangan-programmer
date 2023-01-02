#include <stdio.h>

int main () {
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("%0.3f\n", (x * y) / 12.0);

    return 0;
}