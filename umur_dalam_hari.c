#include <stdio.h>

int main()
{
    int x, umur;

    scanf("%d", &x);

    umur = ((x % 365) - ((x % 365) % 30)) / 30;
    printf("%d tahun\n", (x - (x % 365)) / 365);
    printf("%d bulan\n", umur);
    printf("%d hari\n", (x % 365) % 30);

    return 0;
}